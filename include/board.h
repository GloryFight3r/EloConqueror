#ifndef BOARD_H
#define BOARD_H

#include <cstdint>

class Board {
public:
  static constexpr int8_t BOARD_ROWS = 8;
  static constexpr int8_t BOARD_COLS = 8;

  Board();

  inline int64_t getPositionAsBitboard(int8_t rows, int8_t cols);

  int64_t getKings(bool);
  int64_t getQueens(bool);
  int64_t getRooks(bool);
  int64_t getBishops(bool);
  int64_t getKnights(bool);
  int64_t getPawns(bool);
  int64_t getPlayerTurn();

private:
  /*
   * elements at ind 0 represent white figures, 1 is for black
   */
  int64_t _kings[2];
  int64_t _queens[2];
  int64_t _rooks[2];
  int64_t _bishops[2];
  int64_t _knights[2];
  int64_t _pawns[2];
  bool _player_turn;
};

#endif // !BOARD_H
