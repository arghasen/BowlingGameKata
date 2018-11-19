//
// Created by argha on 20/11/18.
//

#include "Game.h"

void Game::roll(int pins) {
    rolls.push_back(pins);
}

int Game::score() {
    for (int frame = 0; frame < 10; ++frame) {
        if(rolls[2*frame]+rolls[2*frame+1] ==10 ) // spare
            m_score+=rolls[2*frame] +rolls[2*frame+1]+rolls[2*frame+2];
        else
            m_score+=rolls[2*frame] +rolls[2*frame+1];
    }
    return m_score;
}
