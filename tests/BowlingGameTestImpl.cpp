//
// Created by argha on 20/11/18.
//

#include "../ext/catch.h"
#include "../src/Game.h"

TEST_CASE("BowlingGame") {

    Game g;

    SECTION("Gutter Game") {
        for (int i = 0; i < 20; ++i) {
            g.roll(0);
        }
        REQUIRE(g.score() == 0);
    }

    SECTION("Roll all Ones") {
        for (int i = 0; i < 20; ++i) {
            g.roll(1);
        }
        REQUIRE(g.score() == 20);
    }
}
