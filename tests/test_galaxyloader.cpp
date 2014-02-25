#include <gtest/gtest.h>

#include <planet.hpp>
#include <galaxyloader.hpp>

TEST(TestGalaxyLoader, LoadPlanet)
{
    std::string json = "{\"name\":\"Planet1\", \"orbit\":{\"periapsis\": 21.4, \"apoapsis\": 12, \"argument\" : 0}}";
    auto planet = GalaxyLoader::parsePlanet(json);
    ASSERT_EQ("Planet1", planet.name());
    const auto& orbit = planet.orbit();
    ASSERT_EQ(21.4, orbit.periapsis());
    ASSERT_EQ(12.0, orbit.apoapsis());
    ASSERT_EQ(0, orbit.argument());
}
