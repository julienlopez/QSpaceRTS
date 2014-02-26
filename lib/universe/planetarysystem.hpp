#ifndef PLANETARYSYTEM_HPP
#define PLANETARYSYTEM_HPP

#include "planet.hpp"

#include "utils/point.hpp"
#include "utils/uniquecontainerwithname.hpp"

BEGIN_NAMESPACE_UNIVERSE

class PlanetarySystem : public utils::UniqueContainerWithName<Planet>
{
public:
    PlanetarySystem(std::string name_, const utils::Point& p);

    const utils::Point& position() const;

private:
    utils::Point m_position;
};

END_NAMESPACE_UNIVERSE

#endif // PLANETARYSYTEM_HPP
