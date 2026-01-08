#include "board.hpp"
#include "tree-search.hpp"

int main() {
  Board board;

  TreeSearch::search(board, 3);

  return 0;
}
