#include "board.hpp"
#include "tree-search.hpp"

int main() {
  Board board{
      "rnbqkbnr/pp1ppppp/8/2p5/4P3/5N2/PPPP1PPP/RNBQKB1R b KQkq - 1 2 "};
  Board board2{"rnbqkbnr/pp1ppppp/8/2p5/4P3/8/PPPP1PPP/RNBQKBNR w KQkq c6 0 2"};

  board.displayBoard();
  // board2.displayBoard();

  // TreeSearch::search(board, 3);

  return 0;
}
