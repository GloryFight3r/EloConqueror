#include "board.h"

Board::Board() {
  // initialzie kings
  _kings[0] = getPositionAsBitboard(0, 4);
  _kings[1] = getPositionAsBitboard(7, 4);

  // initialize queens
  _queens[0] = getPositionAsBitboard(0, 3);
  _queens[1] = getPositionAsBitboard(7, 3);

  // initialize rooks
  _rooks[0] = getPositionAsBitboard(0, 0);
  _rooks[0] |= getPositionAsBitboard(0, 7);
  _rooks[1] = getPositionAsBitboard(7, 0);
  _rooks[1] |= getPositionAsBitboard(7, 7);

  // initialize bishops
  _bishops[0] = getPositionAsBitboard(0, 2);
  _bishops[0] |= getPositionAsBitboard(0, 5);
  _bishops[1] = getPositionAsBitboard(7, 2);
  _bishops[1] |= getPositionAsBitboard(7, 5);

  // initialize knights
  _bishops[0] = getPositionAsBitboard(0, 1);
  _bishops[0] |= getPositionAsBitboard(0, 6);
  _bishops[1] = getPositionAsBitboard(7, 1);
  _bishops[1] |= getPositionAsBitboard(7, 6);

  // initialize the pawns
  _pawns[0] = ((1LL << BOARD_COLS) - 1) << BOARD_COLS;
  _pawns[1] = ((1LL << BOARD_COLS) - 1) << (BOARD_COLS * (BOARD_ROWS - 2));
}

inline int64_t Board::getPositionAsBitboard(int8_t row, int8_t col) {
  return (1LL << (row * BOARD_COLS + col));
}

int64_t Board::getKings(bool colour) { return _kings[colour]; }

int64_t Board::getQueens(bool colour) { return _queens[colour]; }

int64_t Board::getRooks(bool colour) { return _rooks[colour]; }

int64_t Board::getBishops(bool colour) { return _bishops[colour]; }

int64_t Board::getKnights(bool colour) { return _knights[colour]; }

int64_t Board::getPawns(bool colour) { return _pawns[colour]; }
