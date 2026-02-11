#include <iostream>
#include "core/board.h"

using namespace tetris::core;
using namespace std;

void print_board_border(const Board& board) {
    cout << '+';
    for(Board::size_type x = 0; x < board.width(); ++x)
        cout << '-';
    cout << '+' << endl;
}

void print_board(const Board& board) {
    print_board_border(board);

    for(Board::size_type y = 0; y < board.height(); ++y) {
        cout << '|';
        for(Board::size_type x = 0; x < board.width(); ++x)
            cout << (board.is_filled(static_cast<int>(x), static_cast<int>(y)) ? '#' : ' ');
        cout << '|' << endl;
    }

    print_board_border(board);
}

int main() {
    cout << "cpp-game-engine-tetris: hello!" << endl;
    Board board;
    board.set_filled(1, 1, true);
    board.set_filled(2, 1, true);
    board.set_filled(1, 2, true);
    board.set_filled(2, 2, true);
    print_board(board);

    return 0;
}