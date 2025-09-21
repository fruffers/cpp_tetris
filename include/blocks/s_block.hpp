#pragma once
#include "block.hpp"

class SBlock : public Block {
    public:
        SBlock(int xParam, int yParam) : Block(xParam, yParam, "../resources/svg/tetromino-S.svg") {};
        ~SBlock() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
    private:
        std::vector<std::vector<int>> shape = {
            {0, 1, 1},
            {1, 1, 0}
        };
};