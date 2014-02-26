#include "planetarysystem.hpp"

BEGIN_NAMESPACE_UNIVERSE

PlanetarySystem::PlanetarySystem(std::string name_, const utils::Point& p): utils::UniqueContainerWithName<Planet>(std::move(name_)), m_position(p)
{}

const utils::Point& PlanetarySystem::position() const
{
    return m_position;
}

END_NAMESPACE_UNIVERSE
