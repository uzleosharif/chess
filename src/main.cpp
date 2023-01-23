// SPDX-License-Identifier: GPL-3.0+

#include "chess/board.h"
#include "chess/engine.h"
#include "mdspan.hpp"

auto main() -> int {
  chess::SimpleEngine<chess::BoardArray> engine{};
  //
}