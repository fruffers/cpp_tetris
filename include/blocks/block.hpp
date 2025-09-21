#pragma once
#include "block_interface.hpp"
#include <vector>
#include <string>

class Block : public BlockInterface {
    public:
        Block(int xParam, int yParam, std::string imageParam);
        ~Block() = default;
        virtual void move(int dx, int dy) override;
        virtual void rotate(std::string direction) override;
        virtual std::vector<std::vector<int>> getShape();
    private:
        std::string image;
        int x, y;
        std::vector<std::vector<int>> shape;
};