#ifndef GALAXYLOADER_HPP
#define GALAXYLOADER_HPP

#include "namespace_galaxy.hpp"

#include "utils/noninstantiable.hpp"
#include "utils/point.hpp"

#include <string>

class QJsonObject;

BEGIN_NAMESPACE_GALAXY

class PlanetarySystem;
class Planet;
class Orbit;

class JsonLoader : private utils::noninstantiable
{
public:
    static PlanetarySystem parseSystem(const std::string& json);

    static PlanetarySystem parseSystem(const QJsonObject& object);

    static Planet parsePlanet(const std::string& json);

    static Planet parsePlanet(const QJsonObject& object);

    static Orbit parseOrbit(const QJsonObject& object);

    static utils::Point parsePoint(const QJsonObject& object);
};

END_NAMESPACE_GALAXY

#endif // GALAXYLOADER_HPP
