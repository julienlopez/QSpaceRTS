#include <gtest/gtest.h>

#include <planetarysystem.hpp>

struct TestPlanetarySystem : public ::testing::Test
{
    PlanetarySystem planetarySystem = {0, 0};
};

TEST_F(TestPlanetarySystem, EmptyOnCreation)
{
    ASSERT_TRUE(planetarySystem.empty());
}

