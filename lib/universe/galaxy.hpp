#ifndef GALAXY_HPP
#define GALAXY_HPP

#include "planetarysystem.hpp"

#include "utils/uniquecontainerwithname.hpp"

BEGIN_NAMESPACE_UNIVERSE

class Galaxy : public utils::UniqueContainerWithName<PlanetarySystem>
{
public:
    Galaxy(std::string name_);
};

END_NAMESPACE_UNIVERSE

#endif // GALAXY_HPP
