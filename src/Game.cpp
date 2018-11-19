//
// Created by argha on 20/11/18.
//

#include "Game.h"

void Game::roll(int pins) {
    rolls.push_back(pins);
}

int Game::score() {
    int frameIndex = 0;
    for (int frame = 0; frame < 10; ++frame) {
        if (isStrike(frameIndex)) {
            m_score += 10 + getStrikeBonus(frameIndex);
            frameIndex++;
        } else if (isSpare(frameIndex)) {
            m_score += 10 + getSpareBonus(frameIndex);
            frameIndex += 2;
        } else {
            m_score += getFrameScore(frameIndex);
            frameIndex += 2;
        }
    }
    return m_score;
}

int Game::getStrikeBonus(int frameIndex) const {
    return rolls[frameIndex + 1] + rolls[frameIndex + 2];
}

int Game::getSpareBonus(int frameIndex) const {
    return rolls[frameIndex + 2];
}

int Game::getFrameScore(int frameIndex) const {
    return rolls[frameIndex] + rolls[frameIndex + 1];
}

bool Game::isSpare(int frameIndex) const {
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10;
}

bool Game::isStrike(int frameIndex) {
    return rolls[frameIndex] == 10;
}
