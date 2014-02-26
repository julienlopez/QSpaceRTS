#include "planet.hpp"

BEGIN_NAMESPACE_UNIVERSE

Planet::Planet(std::string name_, const Orbit& orbit_): m_name(name_), m_orbit(orbit_)
{}

const std::string& Planet::name() const
{
    return m_name;
}

const Orbit& Planet::orbit() const
{
    return m_orbit;
}

END_NAMESPACE_UNIVERSE
