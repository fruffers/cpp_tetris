#include "../../include/blocks/block.hpp"

Block::Block(int xParam, int yParam, std::string imageParam) : x(xParam), y(yParam), image(imageParam) {
}

void Block::move(int dx, int dy) {
    x += dx;
    y += dy;
}

void Block::rotate(std::string direction) {
    // Implement rotation logic
}