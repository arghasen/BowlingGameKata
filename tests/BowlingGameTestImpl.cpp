//
// Created by argha on 20/11/18.
//

#include "../ext/catch.h"
#include "../src/Game.h"

TEST_CASE("GutterGame"){
    Game g;
    for (int i = 0; i < 20; ++i) {
        g.roll(0);
    }
    REQUIRE( g.score() == 0 );
}
