#pragma once
#include <string>

class BlockInterface {
    public:
        BlockInterface();
        virtual ~BlockInterface() = default;
        virtual void move(int dx, int dy) = 0;
        virtual void rotate(std::string direction) = 0;
    protected:
        int x, y;
        std::string image;
};