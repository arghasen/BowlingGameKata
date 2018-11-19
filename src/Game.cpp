//
// Created by argha on 20/11/18.
//

#include "Game.h"

void Game::roll(int pins) {
    m_score +=pins;
}

int Game::score() {
    return m_score;
}
