#include "planetarysystem.hpp"

BEGIN_NAMESPACE_UNIVERSE

PlanetarySystem::PlanetarySystem(std::string name_, const utils::Point& p): m_name(std::move(name_)), m_position(p)
{}

bool PlanetarySystem::empty() const
{
    return m_planets.empty();
}

std::size_t PlanetarySystem::count() const
{
    return m_planets.size();
}

const std::string& PlanetarySystem::name() const
{
    return m_name;
}

const utils::Point& PlanetarySystem::position() const
{
    return m_position;
}

void PlanetarySystem::add(Planet&& planet)
{
    m_planets.push_back(std::move(planet));
}

auto PlanetarySystem::begin() const -> const_iterator
{
    return m_planets.begin();
}

auto PlanetarySystem::end() const -> const_iterator
{
    return m_planets.end();
}

END_NAMESPACE_UNIVERSE
