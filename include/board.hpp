#pragma once
#include <vector>
#include "block.hpp"

class Board {
    public:
        Board(int BOARD_WIDTH_PARAM, int BOARD_HEIGHT_PARAM) : grid(BOARD_HEIGHT_PARAM, std::vector<bool>(BOARD_WIDTH_PARAM, false)), BOARD_WIDTH(BOARD_WIDTH_PARAM), BOARD_HEIGHT(BOARD_HEIGHT_PARAM) {};
        bool isOccupied(int x, int y) const;
        void occupy(int x, int y);
        void clearLine(int y);
        int getWidth() const;
        int getHeight() const;
        bool isValidPosition(Block& block, int x, int y);
    private:
        int BOARD_HEIGHT, BOARD_WIDTH;
        std::vector<std::vector<bool>> grid;
};