#include "galaxy.hpp"

BEGIN_NAMESPACE_GALAXY

Galaxy::Galaxy(std::string name_): m_name(std::move(name_))
{}

bool Galaxy::empty() const
{
    return m_systems.empty();
}

std::size_t Galaxy::count() const
{
    return m_systems.size();
}

const std::string& Galaxy::name() const
{
    return m_name;
}

void Galaxy::add(PlanetarySystem&& planet)
{
    m_systems.push_back(std::move(planet));
}

auto Galaxy::begin() const -> const_iterator
{
    return m_systems.begin();
}

auto Galaxy::end() const -> const_iterator
{
    return m_systems.end();
}

END_NAMESPACE_GALAXY
