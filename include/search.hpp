#ifndef SEARCH_H
#define SEARCH_H

#include "board.hpp"
#include "move.hpp"

#include <array>
#include <vector>

namespace MoveExplorer {
void searchAllMoves(const Board &board, const bool turn,
                    std::vector<Move> &moves);
void searchKingMoves(const Board &board, const bool turn,
                     std::vector<Move> &moves);
void searchQueenMoves(const Board &board, const bool turn,
                      std::vector<Move> &moves);
void searchRookMoves(const Board &board, const bool turn,
                     std::vector<Move> &moves);
void searchBishopMoves(const Board &board, const bool turn,
                       std::vector<Move> &moves);
void searchKnightMoves(const Board &board, const bool turn,
                       std::vector<Move> &moves);
void searchPawnMoves(const Board &board, const bool turn,
                     std::vector<Move> &moves);

constexpr std::array<int32_t, 4> move_row_diag = {-1, -1, +1, +1};
constexpr std::array<int32_t, 4> move_col_diag = {-1, +1, -1, +1};

constexpr std::array<int32_t, 4> move_row_line = {0, 0, -1, +1};
constexpr std::array<int32_t, 4> move_col_line = {-1, +1, 0, 0};

constexpr std::array<int8_t, 8> combined_rows = {-1, -1, +1, +1, 0, 0, -1, +1};
constexpr std::array<int8_t, 8> combined_cols = {-1, +1, -1, +1, -1, +1, 0, 0};

constexpr std::array<int32_t, 8> knight_move_row = {-2, -2, -1, 1,
                                                    +2, +2, +1, -1};
constexpr std::array<int32_t, 8> knight_move_col = {-1, +1, +2, +2,
                                                    +1, -1, -2, -2};
}; // namespace MoveExplorer

#endif // !SEARCH_H
