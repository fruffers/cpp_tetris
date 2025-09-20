#pragma once
#include "block.hpp"

class JBlock : public Block {
    public:
        JBlock(int xParam, int yParam) : Block(xParam, yParam, "../resources/svg/tetromino-J.svg") {};
        ~JBlock() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
};