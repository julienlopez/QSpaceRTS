#ifndef PLANETARYSYTEM_HPP
#define PLANETARYSYTEM_HPP

#include "utils/point.hpp"

class PlanetarySystem
{
public:
    PlanetarySystem(const utils::Point& p);

    bool empty() const;

    const utils::Point& position() const;

private:
    utils::Point m_position;
};

#endif // PLANETARYSYTEM_HPP
