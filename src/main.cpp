#include <iostream>
#include <memory>

using namespace std;

#include "Game.h"
#include "NeverLose.h"

#define RANDOM_COMPUTER 0

int main() {

//    int playAgain = 1;
    auto board = make_shared<Board>();
    auto X = make_shared<HumanPlayer>(XO::X,board);

#if RANDOM_COMPUTER
    auto Y = make_shared<RandomComputerPlayer>(XO::O,board);
    auto game = Game::CreateGame(X,Y,board );
#else
    auto neverLoseComputer = make_shared<FunctionalPlayer>(XO::O, board);
#endif

//    while (playAgain) {

        neverLoseComputer->setPlay([&](std::shared_ptr<Board> b) {
            defend(b);
        });

        auto game = Game::CreateGame(X, neverLoseComputer, board);
        auto result = game->Play();
//        cout << result << endl;
        cout << game->toString() << endl;

//        cout << "Play Again? Quit 0";
//        cin >> playAgain;
//
//        for (int i = 0; i < 10; i++) {
//            cout << endl;
//        }
//
//    }

    return 0;
}
