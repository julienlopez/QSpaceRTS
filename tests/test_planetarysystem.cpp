#include <gtest/gtest.h>

#include <planetarysystem.hpp>

struct TestPlanetarySystem : public ::testing::Test
{
    PlanetarySystem planetarySystem = {"System1", {1.5, 2.3}};
};

TEST_F(TestPlanetarySystem, EmptyOnCreation)
{
    ASSERT_TRUE(planetarySystem.empty());
}

TEST_F(TestPlanetarySystem, PositionOkOnCreation)
{
    ASSERT_EQ(utils::Point(1.5, 2.3), planetarySystem.position());
    ASSERT_EQ(1.5, planetarySystem.position().x());
    ASSERT_EQ(2.3, planetarySystem.position().y());
}

TEST_F(TestPlanetarySystem, NameOkOnCreation)
{
    ASSERT_EQ("System1", planetarySystem.name());
}

