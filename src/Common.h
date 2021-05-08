//
// Created by Daniel St. John on 5/7/21.
//
#pragma once

enum XO {
    X = 'X', O='O'
};
enum CellState {
    OPEN=' ', CONTAINS_X = 'X', CONTAINS_O = 'O'
};
enum GameState {
    CATS = 0, X_WINS, O_WINS, IN_PLAY
};
