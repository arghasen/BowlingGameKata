//
// Created by argha on 20/11/18.
//

#ifndef BOWLINGGAMEKATA_GAME_H
#define BOWLINGGAMEKATA_GAME_H


class Game {
    int m_score = 0;
public:
    void roll(int pins);

    int score();
};


#endif //BOWLINGGAMEKATA_GAME_H
