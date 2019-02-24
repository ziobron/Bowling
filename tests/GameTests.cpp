#include <gtest/gtest.h>
#include "Game.hpp"

struct GameTests: public ::testing::Test
{
    Game game;
};

TEST_F(GameTests, AddFrames)
{
    Game game;
    game.addFrames("Someone:32|4");
}

TEST_F(GameTests, conversion_to_int)
{
    Game game;
    auto result = game.conversion_to_int("32|4");
    ASSERT_EQ(result, 0);
}