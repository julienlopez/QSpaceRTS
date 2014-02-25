#ifndef PLANETARYSYTEM_HPP
#define PLANETARYSYTEM_HPP

#include "planet.hpp"

#include "utils/point.hpp"
#include "utils/noncopiable.hpp"

#include <string>
#include <vector>

class PlanetarySystem : private utils::noncopiable
{
public:
    PlanetarySystem(std::string name_, const utils::Point& p);

    bool empty() const;

    std::size_t count() const;

    const std::string& name() const;

    const utils::Point& position() const;

    void add(Planet&& planet);

private:
    std::string m_name;
    utils::Point m_position;

    using container_planet = std::vector<Planet>;
    container_planet m_planets;
};

#endif // PLANETARYSYTEM_HPP
