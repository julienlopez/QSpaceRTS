#ifndef PLANETARYSYTEM_HPP
#define PLANETARYSYTEM_HPP

#include "utils/point.hpp"
#include "utils/noncopiable.hpp"

#include <string>

class PlanetarySystem : public utils::noncopiable
{
public:
    PlanetarySystem(std::string name_, const utils::Point& p);

    bool empty() const;

    const std::string& name() const;

    const utils::Point& position() const;

private:
    std::string m_name;
    utils::Point m_position;
};

#endif // PLANETARYSYTEM_HPP
