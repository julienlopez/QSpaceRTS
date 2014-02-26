#include <gtest/gtest.h>

#include <universe/planet.hpp>

using namespace Universe;

struct TestPlanet : public ::testing::Test
{
    Planet planet = {"System1", {1.5, 2.3, 0}};
};

TEST_F(TestPlanet, OrbitOkOnCreation)
{
    const auto& orbit = planet.orbit();
    ASSERT_EQ(1.5, orbit.periapsis());
    ASSERT_EQ(2.3, orbit.apoapsis());
    ASSERT_EQ(0, orbit.argument());
}

TEST_F(TestPlanet, NameOkOnCreation)
{
    ASSERT_EQ("System1", planet.name());
}

