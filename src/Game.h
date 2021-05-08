//
// Created by Daniel St. John on 5/5/21.
//

#pragma once

#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <memory>
#include <algorithm>
#include <random>

#include "Common.h"
#include "Board.h"
#include "Player.h"

using namespace std;

class Game {
public:
    static shared_ptr<Game> CreateGame(shared_ptr<Player> X, shared_ptr<Player> O, shared_ptr<Board> board);
    GameState Play();
    std::string toString();

protected:
    GameState GetGameSate();
    GameState RowMatch();
    GameState ColMatch();
    GameState DiagMatch();

    shared_ptr<Player> X;
    shared_ptr<Player> O;
    shared_ptr<Player> onTurn;

    Game(shared_ptr<Player> X, shared_ptr<Player> O, shared_ptr<Board> board);

private:
    GameState state;
    shared_ptr<Board> board
    ;
};