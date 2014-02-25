#ifndef PLANET_HPP
#define PLANET_HPP

#include "orbit.hpp"

#include "utils/noncopiable.hpp"

#include <string>

class Planet : private utils::noncopiable
{
public:
    Planet(std::string name_, const Orbit& orbit_);

    const std::string& name() const;
    const Orbit& orbit() const;

private:
    std::string m_name;
    Orbit m_orbit;
};

#endif // PLANET_HPP
