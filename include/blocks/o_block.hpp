#pragma once
#include "block.hpp"

class OBlock : public Block {
    public:
        OBlock(int xParam, int yParam) : Block(xParam, yParam, "../resources/svg/tetromino-O.svg") {};
        ~OBlock() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
    private:
        std::vector<std::vector<int>> shape = {
            {1, 1},
            {1, 1}
        };
};