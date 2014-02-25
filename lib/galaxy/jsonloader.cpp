#include "jsonloader.hpp"
#include "planet.hpp"

#include <QJsonObject>
#include <QJsonDocument>

#include <cassert>

BEGIN_NAMESPACE_GALAXY

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

END_NAMESPACE_GALAXY
