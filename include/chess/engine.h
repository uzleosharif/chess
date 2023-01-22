// SPDX-License-Identifier: GPL-3.0+

#pragma once

#include <vector>

namespace chess {

enum class Piece { KING, ROOK, BISHOP, QUEEN, KNIGHT, PAWN };

// this keeps track of all the pieces during the game
class LivePieces {};

// uses std::vector to hold pieces
class VecLivePieces : public LivePieces {
 private:
  std::vector<Piece> white_pieces_{};
  std::vector<Piece> black_pieces_{};
};

// the universal interface for engine
// we use live_pieces_t as template param to do a strategy pattern
template <typename live_pieces_t>
class Engine {
  //
};

// our first naiive functional implementation of game
template <typename live_pieces_t>
class SimpleEngine : public Engine<live_pieces_t> {
 private:
  live_pieces_t live_pieces_{};
};
}  // namespace chess

// Responsibility: implement the logic of chess game

// Design Patterns to consider:
// - Command Pattern

// Requirements

// Stuff