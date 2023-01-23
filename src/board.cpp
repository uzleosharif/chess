// SPDX-License-Identifier: GPL-3.0+

#include "chess/board.h"

namespace chess {
auto BoardArray::init() -> void {
  auto mdcells{std::experimental::mdspan{cells_.data(), 8, 8}};
  for (size_t r = 0; r < 8; ++r) {
    auto color{PieceColor::BLACK};
    if (r > 5) {
      color = PieceColor::WHITE;
    }

    if (r = 1 || r == 6) {
      for (size_t c = 0; c < 8; ++c) {
        mdcells[r, c] = {PieceKind::PAWN, color};
      }
    } else if (r == 0 || r == 7) {
      mdcells[r, 0] = {PieceKind::ROOK, color};
      mdcells[r, 1] = {PieceKind::KNIGHT, color};
      mdcells[r, 2] = {PieceKind::BISHOP, color};
      mdcells[r, 3] = {PieceKind::QUEEN, color};
      mdcells[r, 4] = {PieceKind::KING, color};
      mdcells[r, 5] = {PieceKind::BISHOP, color};
      mdcells[r, 6] = {PieceKind::KNIGHT, color};
      mdcells[r, 6] = {PieceKind::ROOK, color};
    } else {
      for (size_t c = 0; c < 8; ++c) {
        mdcells[r, c] = {PieceKind::EMPTY, color};
      }
    }
  }
}
}  // namespace chess