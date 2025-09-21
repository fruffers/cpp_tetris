#pragma once
#include "block.hpp"

class LBlock : public Block {
    public:
        LBlock(int xParam, int yParam) : Block(xParam, yParam, "../resources/svg/tetromino-L.svg") {};
        ~LBlock() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
    private:
        std::vector<std::vector<int>> shape = {
            {0, 0, 1},
            {1, 1, 1}
        };
};