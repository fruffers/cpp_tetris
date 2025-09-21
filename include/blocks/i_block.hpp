#pragma once
#include "block.hpp"

class IBlock : public Block {
    public:
        IBlock(int xParam, int yParam) : Block(xParam, yParam, "../resources/svg/tetromino-I.svg") {};
        ~IBlock() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
    private:
        std::vector<std::vector<int>> shape = {
            {1, 1, 1, 1}
        };
};