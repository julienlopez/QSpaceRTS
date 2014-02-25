#ifndef PLANETLOADER_HPP
#define PLANETLOADER_HPP

#include "utils/noninstantiable.hpp"

#include <string>

class Planet;
class Orbit;

class QJsonObject;

class PlanetLoader : private utils::noninstantiable
{
public:
    static Planet fromJson(const std::string& json);

    static Planet fromJson(const QJsonObject& object);

    static Orbit parseOrbit(const QJsonObject& object);
};

#endif // PLANETLOADER_HPP
