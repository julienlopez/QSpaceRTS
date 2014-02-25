#ifndef GALAXYLOADER_HPP
#define GALAXYLOADER_HPP

#include "namespace_galaxy.hpp"

#include "utils/noninstantiable.hpp"

#include <string>

class QJsonObject;

BEGIN_NAMESPACE_GALAXY

class Planet;
class Orbit;

class GalaxyLoader : private utils::noninstantiable
{
public:
    static Planet parsePlanet(const std::string& json);

    static Planet parsePlanet(const QJsonObject& object);

    static Orbit parseOrbit(const QJsonObject& object);
};

END_NAMESPACE_GALAXY

#endif // GALAXYLOADER_HPP
