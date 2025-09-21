#pragma once
#include "block.hpp"

class ZBlock : public Block {
    public:
        ZBlock(int xParam, int yParam) : Block(xParam, yParam, "../resources/svg/tetromino-Z.svg") {};
        ~ZBlock() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
    private:
        std::vector<std::vector<int>> shape = {
            {1, 1, 0},
            {0, 1, 1}
        };
};