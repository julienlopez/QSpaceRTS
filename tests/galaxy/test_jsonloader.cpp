#include <gtest/gtest.h>

#include <universe/planet.hpp>
#include <universe/jsonloader.hpp>
#include <universe/planetarysystem.hpp>

using namespace Universe;

TEST(TestGalaxyLoader, LoadPlanet)
{
    std::string json = "{\"name\":\"Planet1\", \"orbit\":{\"periapsis\": 12, \"apoapsis\": 21.4, \"argument\" : 0}}";
    auto planet = JsonLoader::parsePlanet(json);
    ASSERT_EQ("Planet1", planet.name());
    const auto& orbit = planet.orbit();
    ASSERT_EQ(12, orbit.periapsis());
    ASSERT_EQ(21.4, orbit.apoapsis());
    ASSERT_EQ(0, orbit.argument());
}

TEST(TestGalaxyLoader, LoadSystem)
{
    std::string json = "{\"name\" : \"System1\", \"position\" : {\"x\":1,\"y\":2}, \"planets\":[";
    json += "{\"name\":\"Planet1\", \"orbit\":{\"periapsis\": 12.2, \"apoapsis\": 21.4, \"argument\" : 0}}, ";
    json += "{\"name\":\"Planet2\", \"orbit\":{\"periapsis\": 41.8, \"apoapsis\": 57.1, \"argument\" : 0.26}}";
    json += "]}";
    auto system = JsonLoader::parseSystem(json);
    ASSERT_EQ("System1", system.name());
    ASSERT_EQ(utils::Point(1, 2), system.position());
    ASSERT_EQ(2, system.count());

    auto it = system.begin();
    ASSERT_NE(system.end(), it);
    const auto& p1 = *it;
    ASSERT_EQ("Planet1", p1.name());
    const auto& orbit1 = p1.orbit();
    ASSERT_EQ(12.2, orbit1.periapsis());
    ASSERT_EQ(21.4, orbit1.apoapsis());
    ASSERT_EQ(0, orbit1.argument());

    ++it;

    ASSERT_NE(system.end(), it);
    const auto& p2 = *it;
    ASSERT_EQ("Planet2", p2.name());
    const auto& orbit2 = p2.orbit();
    ASSERT_EQ(41.8, orbit2.periapsis());
    ASSERT_EQ(57.1, orbit2.apoapsis());
    ASSERT_EQ(0.26, orbit2.argument());

    ++it;

    ASSERT_EQ(system.end(), it);
}

TEST(TestGalaxyLoader, DISABLED_LoadGalaxy)
{
    FAIL() << "todo";
}
