#ifndef ORBIT_HPP
#define ORBIT_HPP

#include "namespace_universe.hpp"

BEGIN_NAMESPACE_UNIVERSE

/**
 * @brief The Orbit class describes orbital informations about an object.
 * In 2D, it consists of only two apsides, the periapsis (the lowest point in the orbit), and the apoapsis (the higher point in the orbit),
 * as well as the argument of periapsis, the angle of the axis between the two apsides.
 */
class Orbit
{
public:
    Orbit(double periapsis_, double apoapsis_, double argument_);

    double periapsis() const;
    double apoapsis() const;
    double argument() const;

private:
    double m_periapsis;
    double m_apoapsis;
    double m_argument;
};

END_NAMESPACE_UNIVERSE

#endif // ORBIT_HPP
