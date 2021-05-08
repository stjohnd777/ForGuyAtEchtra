//
// Created by Daniel St. John on 5/5/21.
//
#include "Game.h"
#include <algorithm>
#include <sstream>
using namespace std;

double randd() {
    return (double) rand() / ((double) RAND_MAX + 1);
}

bool isHeads() {
    return randd() < .5;
}

shared_ptr<Game> Game::CreateGame( shared_ptr<Player> X, shared_ptr<Player> O,  shared_ptr<Board> board ) {
    return shared_ptr<Game>(new Game(X,O,board));
}

Game::Game(shared_ptr<Player> X, shared_ptr<Player> O,shared_ptr<Board> board ): X(X), O(O), board(board){
    //onTurn = isHeads() ? X : O;
    onTurn = X;
}

GameState Game::GetGameSate() {

    // col match
    GameState state = ColMatch();
    if (state == GameState::X_WINS) {
        return GameState::X_WINS;
    }
    if (state == GameState::O_WINS) {
        return GameState::O_WINS;
    }

    // row match
    state = RowMatch();
    if (state == GameState::X_WINS) {
        return GameState::X_WINS;
    }
    if (state == GameState::O_WINS) {
        return GameState::O_WINS;
    }

    // diag match
    state = DiagMatch();
    if (state == GameState::X_WINS) {
        return GameState::X_WINS;
    }
    if (state == GameState::O_WINS) {
        return GameState::O_WINS;
    }
    // moves left
    return board->MovesLeft() ? GameState::IN_PLAY : GameState::CATS;
}

//int Game::index(int row, int col) {
//    int N = 3;
//    return col + row * N;
//}

GameState Game::ColMatch() {
    int N = 3;
    char X = CellState::CONTAINS_X;
    char O = CellState::CONTAINS_O;
    for (int col = 0; col < N; col++) {
        auto A = (char) board->get(0, col);
        auto B = (char)board->get(1, col);
        auto C = (char) board->get(2, col);
        if (A == X && B == X && C == X ) {
            return GameState::X_WINS;
        }
        if (A == O && B == O && C == O) {
            return GameState::O_WINS;
        }
    }
    return GameState::IN_PLAY;
}

GameState Game::RowMatch() {
    int N = 3;
    char X = CellState::CONTAINS_X;
    char O = CellState::CONTAINS_O;
    for (int row = 0; row < 3; row++) {
        auto A = (char) board->get(row, 0);
        auto B = (char)board->get(row, 1);
        auto C = (char) board->get(row, 2);
        if (A == X && B ==  X && C  == X) {
            return GameState::X_WINS;
        }
        if (A == O && B ==  O && C  == O) {
            return GameState::O_WINS;
        }
    }
    return GameState::IN_PLAY;
}

GameState Game::DiagMatch() {
    int N = 3;
    char X = CellState::CONTAINS_X;
    char O = CellState::CONTAINS_O;

    auto A = (char) board->get(0, 0);
    auto B = (char)board->get(1, 1);
    auto C = (char) board->get(2, 2);
    if (A == X && B ==  X && C  == X) {
        return GameState::X_WINS;
    }
    if (A == O && B ==  O && C  == O) {
        return GameState::O_WINS;
    }

    A = (char) board->get(2, 2);
    B = (char)board->get(1, 1);
    C = (char) board->get(2, 0);
    if (A == X && B ==  X && C  == X) {
        return GameState::X_WINS;
    }
    if (A == O && B ==  O && C  == O) {
        return GameState::O_WINS;
    }
    return GameState::IN_PLAY;
}

GameState Game::Play() {
    state = GetGameSate();
    if ( onTurn == X) {
        cout << "X on move " << "X=" << onTurn->toString() <<  endl;
    } else if ( onTurn == O){
        cout << "Y on move " << "Y=" << onTurn->toString() << endl;
    }else {
        throw new runtime_error("Invalid Game State `onTurn`");
    }
    while (state == IN_PLAY) {
        board->show();
        cout <<  endl;
        if (onTurn == X) {
            cout << "X on move " << onTurn->toString() <<  endl;
            X->play();
            onTurn = O;
        } else {
            cout << "Y on move " << onTurn->toString() <<  endl;
            O->play();
            onTurn = X;
        }
        state = GetGameSate();
    }
    return state;
}


std::string Game::toString() {
    stringstream ss;
    ss << "X:" << X->toString() << endl;
    ss << "O:" << O->toString() << endl;
    if ( state == GameState ::CATS){
        ss << "CATS" << endl;
    }else if ( state == GameState ::O_WINS){
        ss << "O Wins" << endl;
    }else if ( state == GameState ::X_WINS){
        ss << "X Wins" << endl;
    }
    board->show();
    return ss.str();
}