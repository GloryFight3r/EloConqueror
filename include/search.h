#ifndef SEARCH_H
#define SEARCH_H

#include "board.h"
#include <vector>

class MoveExplorer {
public:
  std::vector<Board> searchAllMoves(Board);
  std::vector<Board> searchKingMoves(Board);
  std::vector<Board> searchQueenMoves(Board);
  std::vector<Board> searchRookMoves(Board);
  std::vector<Board> searchBishopMoves(Board);
  std::vector<Board> searchKnightMoves(Board);
  std::vector<Board> searchPawnMoves(Board);
};

#endif // !SEARCH_H
