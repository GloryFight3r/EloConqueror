#include "tree-search.hpp"
#include "search.hpp"

#include <iostream>
#include <queue>
#include <tuple>

void TreeSearch::search(const Board &board, int32_t depth) {
  std::queue<std::tuple<Board, int32_t>> all_boards;

  all_boards.push(std::make_tuple(board, 0));

  int32_t cnt = 0;

  while (!all_boards.empty()) {
    std::tuple<Board, int32_t> head_node = all_boards.front();
    all_boards.pop();
    const Board &current_node = std::get<0>(head_node);
    const int32_t cur_depth = std::get<1>(head_node);

    if (cur_depth == depth) {

      cnt++;
      continue;
    }

    std::vector<Move> moves = MoveExplorer::searchAllMoves(
        current_node, current_node.getPlayerTurn(), true);
    for (const auto &next_move : moves) {
      all_boards.push(std::make_tuple(
          current_node.makeMove(
              next_move.pos_from, next_move.pos_to, next_move.piece_type,
              current_node.getPlayerTurn(), next_move.move_type),
          cur_depth + 1));
    }
  }

  std::cout << cnt << std::endl;
}
