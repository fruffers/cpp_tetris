#pragma once
#include "block_interface.hpp"
#include <vector>
#include <string>

class Block : public BlockInterface {
    public:
        Block(int xParam, int yParam, std::string imageParam);
        ~Block() = default;
        void move(int dx, int dy) override;
        void rotate(std::string direction) override;
    private:
        std::string image;
        int x, y;
        std::vector<std::vector<int>> shape;
};