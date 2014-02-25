#include "planetarysystem.hpp"

PlanetarySystem::PlanetarySystem(const utils::Point &p): m_position(p)
{}

bool PlanetarySystem::empty() const
{
    return true;
}

const utils::Point& PlanetarySystem::position() const
{
    return m_position;
}
