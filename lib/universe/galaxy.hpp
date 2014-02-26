#ifndef GALAXY_HPP
#define GALAXY_HPP

#include "planetarysystem.hpp"

#include "utils/noncopiable.hpp"

#include <string>
#include <vector>

BEGIN_NAMESPACE_UNIVERSE

class Galaxy : private utils::noncopiable
{
public:
    using container_systems = std::vector<PlanetarySystem>;
    using const_iterator = container_systems::const_iterator;

    Galaxy(std::string name_);

    bool empty() const;

    std::size_t count() const;

    const std::string& name() const;

    void add(PlanetarySystem&& planet);

    const_iterator begin() const;
    const_iterator end() const;

private:
    std::string m_name;
    container_systems m_systems;
};

END_NAMESPACE_UNIVERSE

#endif // GALAXY_HPP
