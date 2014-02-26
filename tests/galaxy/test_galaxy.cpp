#include <gtest/gtest.h>

#include <galaxy/galaxy.hpp>

using namespace Galaxy;

struct TestGalaxy : public ::testing::Test
{
    Galaxy::Galaxy galaxy = {"Galaxy1"};
};

TEST_F(TestGalaxy, EmptyOnCreation)
{
    ASSERT_TRUE(galaxy.empty());
}

TEST_F(TestGalaxy, CountZeroOnCreation)
{
    ASSERT_EQ(0, galaxy.count());
}

TEST_F(TestGalaxy, NameOkOnCreation)
{
    ASSERT_EQ("Galaxy1", galaxy.name());
}

struct TestGalaxyWithOneSystem : public TestGalaxy
{
    virtual void SetUp() override
    {
        galaxy.add(PlanetarySystem("s1", {0, 0}));
    }
};

TEST_F(TestGalaxyWithOneSystem, NotEmpty)
{
    ASSERT_FALSE(galaxy.empty());
}

TEST_F(TestGalaxyWithOneSystem, Count)
{
    ASSERT_EQ(1, galaxy.count());
}


