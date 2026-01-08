#ifndef MOVE_H
#define MOVE_H

#include "util.hpp"

#include <cstdint>

struct Move {
  int64_t pos_from;
  int64_t pos_to;
  Pieces piece_type;
  MoveType move_type;

  Move(int64_t pos_from_, int64_t pos_to_, Pieces piece_type_,
       MoveType move_type_)
      : pos_from(pos_from_), pos_to(pos_to_), piece_type(piece_type_),
        move_type(move_type_) {}
};

#endif // !MOVE_H
