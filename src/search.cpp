#include "search.h"
#include <bit>

std::vector<Board> MoveExplorer::searchAllMoves(Board board) {
  std::vector<Board> moves;

  return moves;
}

std::vector<Board> MoveExplorer::searchKingMoves(Board board) {
  std::vector<Board> moves;

  const int8_t moveX[4] = {-1, 0, +1, 0};
  const int8_t moveY[4] = {0, -1, 0, +1};

  int64_t king_positions = 0;

  for (size_t i{0}; i < 4; i++) {
  }

  return moves;
}

std::vector<Board> MoveExplorer::searchQueenMoves(Board board) {}

std::vector<Board> MoveExplorer::searchRookMoves(Board board) {}

std::vector<Board> MoveExplorer::searchBishopMoves(Board board) {}

std::vector<Board> MoveExplorer::searchKnightMoves(Board board) {}

std::vector<Board> MoveExplorer::searchPawnMoves(Board board) {}
