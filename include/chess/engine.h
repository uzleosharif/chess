// SPDX-License-Identifier: GPL-3.0+

#pragma once

namespace chess {

///////////////////////////////////////////////////////////
// Developer Notes:
// Engine:
// Responsibility: implement the logic of chess game
//
// Requirements
// - when game starts, all pieces are initialized
//
// Stuff
///////////////////////////////////////////////////////////

// the universal interface for engine
// the design uses a storage policy to keep track of live pieces.
template <typename Board>
class Engine {
 public:
  virtual ~Engine() = default;

  // initializes the engine
  virtual auto init() -> void = 0;
};

// our first naiive functional implementation of game
template <typename Board>
class SimpleEngine final : public Engine<Board> {
 public:
  auto init() -> void override { board_.init(); }

 private:
  Board board_{};
};
}  // namespace chess
