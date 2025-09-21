#pragma once
#include "block.hpp"

class TBlock : public Block {
    public:
        TBlock(int xParam, int yParam) : Block(xParam, yParam, "../resources/svg/tetromino-T.svg") {};
        ~TBlock() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
    private:
        std::vector<std::vector<int>> shape = {
            {0, 1, 0},
            {1, 1, 1}
        };
};