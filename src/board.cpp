#include "../include/board.hpp"

bool Board::isValidPosition(Block& block, int x, int y) {
    auto shape = block.getShape();
    for (int row = 0; row < shape.size(); row++) {
        for (int col = 0; col < shape[row].size(); col++) {
            if (shape[row][col] != 0) {
                int boardX = x + col;
                int boardY = y + row;
                
                // Check bounds and collision
                if (boardX < 0 || boardX >= BOARD_WIDTH || 
                    boardY >= BOARD_HEIGHT || 
                    grid[boardY][boardX] != 0) {
                    return false;
                }
            }
        }
    }
    return true;
}