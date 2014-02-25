#include "orbit.hpp"

BEGIN_NAMESPACE_GALAXY

Orbit::Orbit(double periapsis_, double apoapsis_, double argument_): m_periapsis(periapsis_), m_apoapsis(apoapsis_), m_argument(argument_)
{}

double Orbit::periapsis() const {
    return m_periapsis;
}

double Orbit::apoapsis() const {
    return m_apoapsis;
}

double Orbit::argument() const {
    return m_argument;
}

END_NAMESPACE_GALAXY
