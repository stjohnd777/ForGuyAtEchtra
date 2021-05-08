#include <iostream>

#include "Game.h"
#include <memory>

int main() {
    using namespace std;
    auto board = make_shared<Board>();
    auto X = make_shared<HumanPlayer>(XO::X,board);
    auto Y = make_shared<RandomComputerPlayer>(XO::O,board);
    auto game = Game::CreateGame(X,Y,board );
    auto result = game->Play();
    cout << result << endl;
    cout << game->toString() << endl;
    return 0;
}
