#include "jsonloader.hpp"
#include "planet.hpp"
#include "planetarysystem.hpp"

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>

#include <cassert>

BEGIN_NAMESPACE_GALAXY

PlanetarySystem JsonLoader::parseSystem(const std::string& json)
{
    QJsonParseError error;
    auto doc = QJsonDocument::fromJson(QString::fromStdString(json).toUtf8(), &error);
    assert(doc.isObject());
    return parseSystem(doc.object());
}

PlanetarySystem JsonLoader::parseSystem(const QJsonObject& object)
{
    assert(!object.isEmpty());

    auto it = object.find("name");
    assert(it != object.end());
    assert(it.value().isString());
    std::string name = it.value().toString().toStdString();

    it = object.find("position");
    assert(it != object.end());
    assert(it.value().isObject());
    auto pos = parsePoint(it.value().toObject());

    PlanetarySystem system(name, pos);

    it = object.find("planets");
    assert(it != object.end());
    assert(it.value().isArray());
    auto planets = it.value().toArray();
    for(const auto& p : planets)
    {
        assert(p.isObject());
        system.add(parsePlanet(p.toObject()));
    }

    return system;
}

Planet JsonLoader::parsePlanet(const std::string& json)
{
    QJsonParseError error;
    auto doc = QJsonDocument::fromJson(QString::fromStdString(json).toUtf8(), &error);
    assert(doc.isObject());
    return parsePlanet(doc.object());
}

Planet JsonLoader::parsePlanet(const QJsonObject& object)
{
    assert(!object.isEmpty());

    auto it = object.find("name");
    assert(it != object.end());
    assert(it.value().isString());
    std::string name = it.value().toString().toStdString();

    it = object.find("orbit");
    assert(it != object.end());
    assert(it.value().isObject());
    auto obj = it.value().toObject();

    return Planet(name, parseOrbit(obj));
}

Orbit JsonLoader::parseOrbit(const QJsonObject& object)
{
    assert(!object.isEmpty());

    auto it = object.find("periapsis");
    assert(it != object.end());
    assert(it.value().isDouble());
    double periapsis = it.value().toDouble();

    it = object.find("apoapsis");
    assert(it != object.end());
    assert(it.value().isDouble());
    double apoapsis = it.value().toDouble();

    it = object.find("argument");
    assert(it != object.end());
    assert(it.value().isDouble());
    double argument = it.value().toDouble();

    return Orbit(periapsis, apoapsis, argument);
}

utils::Point JsonLoader::parsePoint(const QJsonObject& object)
{
    assert(!object.isEmpty());

    auto it = object.find("x");
    assert(it != object.end());
    assert(it.value().isDouble());
    double x = it.value().toDouble();

    it = object.find("y");
    assert(it != object.end());
    assert(it.value().isDouble());
    double y = it.value().toDouble();

    return utils::Point(x, y);
}

END_NAMESPACE_GALAXY
