// SPDX-License-Identifier: GPL-3.0+

#include "QtWidgets/QApplication"
#include "QtWidgets/QGridLayout"
#include "QtWidgets/QLabel"
#include "QtWidgets/QPushButton"
#include "QtWidgets/QWidget"
#include "chess/board.h"
#include "chess/engine.h"

auto main(int argc, char** argv) -> int {
  QApplication app{argc, argv};

  chess::SimpleEngine<chess::BoardArray> engine{};
}