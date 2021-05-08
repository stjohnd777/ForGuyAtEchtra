#include <iostream>

#include "Game.h"
#include <memory>

using namespace std;


void defend(std::shared_ptr<Board> board) {
    // Check Rows
    auto X = XO::X;
    for (int row = 0; row < 3; row++) {
        auto c1 = board->get(row, 0) == X ? 1 : 0;
        auto c2 = board->get(row, 1) == X ? 1 : 0;
        auto c3 = board->get(row, 2) == X ? 1 : 0;
        auto sum = c1 + c2 + c3;
        if (sum == 2) {
            if (c1 == 0 && board->get(row, 0) == CellState::OPEN) {
                board->set(row, 0, XO::O);
                return;
            }
            if (c2 == 0 && board->get(row, 1) == CellState::OPEN) {
                board->set(row, 1, XO::O);
                return;
            }
            if (c3 == 0 && board->get(row, 2) == CellState::OPEN) {
                board->set(row, 2, XO::O);
                return;
            }
        }
    }

    // Check Cols
    for (int col = 0; col < 3; col++) {
        auto r1 = board->get(0, col) == X ? 1 : 0;
        auto r2 = board->get(1, col) == X ? 1 : 0;
        auto r3 = board->get(2, col) == X ? 1 : 0;
        auto sum = r1 + r2 + r3;
        if (sum == 2) {
            if (r1 == 0 && board->get(0, col) == CellState::OPEN) {
                board->set(0, col, XO::O);
                return;
            }
            if (r2 == 0 && board->get(1, col) == CellState::OPEN) {
                board->set(1, col, XO::O);
                return;
            }
            if (r3 == 0 && board->get(1, col) == CellState::OPEN) {
                board->set(2, col, XO::O);
                return;
            }
        }
    }

    // Check Main Diag
    auto d1 = board->get(0, 0) == X ? 1 : 0;
    auto d2 = board->get(1, 1) == X ? 1 : 0;
    auto d3 = board->get(2, 2) == X ? 1 : 0;
    auto sum = d1 + d2 + d3;
    if (sum == 2) {
        if (d1 == 0 && board->get(0, 0) == CellState::OPEN) {
            board->set(0, 0, XO::O);
            return;
        }
        if (d2 == 0 && board->get(1, 1) == CellState::OPEN) {
            board->set(1, 1, XO::O);
            return;
        }
        if (d3 == 0 && board->get(2, 2) == CellState::OPEN) {
            board->set(2, 2, XO::O);
            return;
        }
    }

    // Check Reversed Diag
    auto d1t = board->get(2, 2) == X ? 1 : 0;
    auto d2t = board->get(1, 1) == X ? 1 : 0;
    auto d3t = board->get(2, 0) == X ? 1 : 0;
    auto sumt = d1 + d2 + d3;
    if (sum == 2) {
        if (d1t == 0 && board->get(2, 2) == CellState::OPEN) {
            board->set(2, 2, XO::O);
            return;
        }
        if (d2t == 0 && board->get(1, 1) == CellState::OPEN) {
            board->set(2, 2, XO::O);
            return;
        }
        if (d3t == 0 && board->get(2, 0) == CellState::OPEN) {
            board->set(2, 0, XO::O);
            return;
        }
    }

    // open index on board
    vector<int> v;
    for (int index = 0; index < 9; index++) {
        auto elem = board->get(index);
        if (elem == XO::X || elem == XO::O) {
            continue;
        }
        v.push_back(index);
    }


    // if center open choose it as defence
    if (find(begin(v), end(v), 4) != v.end()) {
        board->set(4, XO::O);
        return;
    }

    // random choose open index
    int size = v.size();
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(0, size - 1);
    auto random_integer = uni(rng);
    board->set(v[random_integer], XO::O);

}

#define RANDOM_COMUTER 0

int main() {

#if RANDOM_COMUTER
    auto board = make_shared<Board>();
    auto X = make_shared<HumanPlayer>(XO::X,board);
    auto Y = make_shared<RandomComputerPlayer>(XO::O,board);
    auto game = Game::CreateGame(X,Y,board );
    auto result = game->Play();
    cout << result << endl;
    cout << game->toString() << endl;
#else
    int playAgain = 1;
    auto board = make_shared<Board>();
    auto X = make_shared<HumanPlayer>(XO::X, board);
    auto neverLoseComputer = make_shared<FunctionalPlayer>(XO::O, board);

    while (playAgain) {

        neverLoseComputer->setPlay([&](std::shared_ptr<Board> b) {
            // Check Rows
            auto X = XO::X;
            for (int row = 0; row < 3; row++) {
                auto c1 = board->get(row, 0) == X ? 1 : 0;
                auto c2 = board->get(row, 1) == X ? 1 : 0;
                auto c3 = board->get(row, 2) == X ? 1 : 0;
                auto sum = c1 + c2 + c3;
                if (sum == 2) {
                    if (c1 == 0 && board->get(row, 0) == CellState::OPEN) {
                        b->set(row, 0, XO::O);
                        return;
                    }
                    if (c2 == 0 && board->get(row, 1) == CellState::OPEN) {
                        b->set(row, 1, XO::O);
                        return;
                    }
                    if (c3 == 0 && board->get(row, 2) == CellState::OPEN) {
                        b->set(row, 2, XO::O);
                        return;
                    }
                }
            }

            // Check Cols
            for (int col = 0; col < 3; col++) {
                auto r1 = board->get(0, col) == X ? 1 : 0;
                auto r2 = board->get(1, col) == X ? 1 : 0;
                auto r3 = board->get(2, col) == X ? 1 : 0;
                auto sum = r1 + r2 + r3;
                if (sum == 2) {
                    if (r1 == 0 && board->get(0, col) == CellState::OPEN) {
                        b->set(0, col, XO::O);
                        return;
                    }
                    if (r2 == 0 && board->get(1, col) == CellState::OPEN) {
                        b->set(1, col, XO::O);
                        return;
                    }
                    if (r3 == 0 && board->get(1, col) == CellState::OPEN) {
                        b->set(2, col, XO::O);
                        return;
                    }
                }
            }

            // Check Main Diag
            auto d1 = board->get(0, 0) == X ? 1 : 0;
            auto d2 = board->get(1, 1) == X ? 1 : 0;
            auto d3 = board->get(2, 2) == X ? 1 : 0;
            auto sum = d1 + d2 + d3;
            if (sum == 2) {
                if (d1 == 0 && board->get(0, 0) == CellState::OPEN) {
                    b->set(0, 0, XO::O);
                    return;
                }
                if (d2 == 0 && board->get(1, 1) == CellState::OPEN) {
                    b->set(1, 1, XO::O);
                    return;
                }
                if (d3 == 0 && board->get(2, 2) == CellState::OPEN) {
                    b->set(2, 2, XO::O);
                    return;
                }
            }

            // Check Reversed Diag
            auto d1t = board->get(2, 2) == X ? 1 : 0;
            auto d2t = board->get(1, 1) == X ? 1 : 0;
            auto d3t = board->get(2, 0) == X ? 1 : 0;
            auto sumt = d1 + d2 + d3;
            if (sum == 2) {
                if (d1t == 0 && board->get(2, 2) == CellState::OPEN) {
                    b->set(2, 2, XO::O);
                    return;
                }
                if (d2t == 0 && board->get(1, 1) == CellState::OPEN) {
                    b->set(2, 2, XO::O);
                    return;
                }
                if (d3t == 0 && board->get(2, 0) == CellState::OPEN) {
                    b->set(2, 0, XO::O);
                    return;
                }
            }

            // open index on board
            vector<int> v;
            for (int index = 0; index < 9; index++) {
                auto elem = board->get(index);
                if (elem == XO::X || elem == XO::O) {
                    continue;
                }
                v.push_back(index);
            }


            // if center open choose it as defence
            if (find(begin(v), end(v), 4) != v.end()) {
                b->set(4, XO::O);
                return;
            }

            // random choose open index
            int size = v.size();
            std::random_device rd;
            std::mt19937 rng(rd());
            std::uniform_int_distribution<int> uni(0, size - 1);
            auto random_integer = uni(rng);
            b->set(v[random_integer], XO::O);

        });

        auto game = Game::CreateGame(X, neverLoseComputer, board);
        auto result = game->Play();
        cout << result << endl;
        cout << game->toString() << endl;

        cout << "Play Again? Quit 0";
        cin >> playAgain;

        for (int i = 0; i < 10; i++) {
            cout << endl;
        }

    }
#endif
    return 0;
}
