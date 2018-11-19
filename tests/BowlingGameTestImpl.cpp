//
// Created by argha on 20/11/18.
//

#include "../ext/catch.h"
#include "../src/Game.h"

void rollMany(Game &g, int numTimes, int pins) {
    for (int i = 0; i < numTimes; ++i) {
        g.roll(pins);
    }
}

TEST_CASE("BowlingGame") {
    Game g;

    SECTION("Gutter Game") {
        rollMany(g, 20, 0);
        REQUIRE(g.score() == 0);
    }

    SECTION("Roll all Ones") {
        rollMany(g, 20, 1);
        REQUIRE(g.score() == 20);
    }

    SECTION(("One Spare")) {
        g.roll(5);
        g.roll(5); //spare
        rollMany(g,18,0);
        REQUIRE(g.score()==10);
    }

    SECTION(("One Spare and one non zero roll next")) {
        g.roll(5);
        g.roll(5); //spare
        g.roll(3);
        rollMany(g,17,0);
        REQUIRE(g.score()==16);
    }
}
