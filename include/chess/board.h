// SPDX-License-Identifier: GPL-3.0+

#pragma once

#include <array>

#include "mdspan.hpp"

namespace chess {
enum class PieceKind { KING, ROOK, BISHOP, QUEEN, KNIGHT, PAWN, EMPTY };
enum class PieceColor { BLACK, WHITE };

// interface for the concept of board that manages the state of the pieces
// at run-time
// Responsibility: provides data-structure for holding pieces during run-time
class Board {
 public:
  virtual ~Board() = default;

  // resets the board to initial state (start of game)
  virtual auto init() -> void = 0;
};

// uses a static 2D array to represent each cell on the board
class BoardArray final : public Board {
  using piece_t = std::pair<PieceKind, PieceColor>;

 public:
  BoardArray();

  auto init() -> void override;

 private:
  std::array<piece_t, 64> cells_{};
};

// this is a dumb class meant to just show how we can use different storage
// policies in future
class BitBoard final : public Board {};
}  // namespace chess