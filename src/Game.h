//
// Created by argha on 20/11/18.
//

#ifndef BOWLINGGAMEKATA_GAME_H
#define BOWLINGGAMEKATA_GAME_H

#include <vector>

class Game {
    int m_score = 0;
    std::vector<int> rolls;
private:
    bool isSpare(int frameIndex) const;

    bool isStrike(int index);

    int getFrameScore(int frameIndex) const;

    int getSpareBonus(int frameIndex) const;

    int getStrikeBonus(int frameIndex) const;

public:
    void roll(int pins);

    int score();

};


#endif //BOWLINGGAMEKATA_GAME_H
