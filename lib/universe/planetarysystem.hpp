#ifndef PLANETARYSYTEM_HPP
#define PLANETARYSYTEM_HPP

#include "planet.hpp"

#include "utils/point.hpp"
#include "utils/noncopiable.hpp"

#include <string>
#include <vector>

BEGIN_NAMESPACE_UNIVERSE

class PlanetarySystem : private utils::noncopiable
{
public:
    using container_planet = std::vector<Planet>;
    using const_iterator = container_planet::const_iterator;

    PlanetarySystem(std::string name_, const utils::Point& p);

    bool empty() const;

    std::size_t count() const;

    const std::string& name() const;

    const utils::Point& position() const;

    void add(Planet&& planet);

    const_iterator begin() const;
    const_iterator end() const;

private:
    std::string m_name;
    utils::Point m_position;

    container_planet m_planets;
};

END_NAMESPACE_UNIVERSE

#endif // PLANETARYSYTEM_HPP
