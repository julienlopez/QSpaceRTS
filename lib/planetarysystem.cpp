#include "planetarysystem.hpp"

PlanetarySystem::PlanetarySystem(std::string name_, const utils::Point& p): m_name(std::move(name_)), m_position(p)
{}

bool PlanetarySystem::empty() const
{
    return true;
}

const std::string& PlanetarySystem::name() const
{
    return m_name;
}

const utils::Point& PlanetarySystem::position() const
{
    return m_position;
}
