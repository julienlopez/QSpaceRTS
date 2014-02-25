#ifndef GALAXYLOADER_HPP
#define GALAXYLOADER_HPP

#include "utils/noninstantiable.hpp"

#include <string>

class Planet;
class Orbit;

class QJsonObject;

class GalaxyLoader : private utils::noninstantiable
{
public:
    static Planet parsePlanet(const std::string& json);

    static Planet parsePlanet(const QJsonObject& object);

    static Orbit parseOrbit(const QJsonObject& object);
};

#endif // GALAXYLOADER_HPP
