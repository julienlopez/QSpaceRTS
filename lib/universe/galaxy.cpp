#include "galaxy.hpp"

BEGIN_NAMESPACE_UNIVERSE

Galaxy::Galaxy(std::string name_): utils::UniqueContainerWithName<PlanetarySystem>(std::move(name_))
{}

END_NAMESPACE_UNIVERSE
