#pragma once
#include <vector>

class Board {
    public:
        Board(int width, int height);
        bool isOccupied(int x, int y) const;
        void occupy(int x, int y);
        void clearLine(int y);
        int getWidth() const;
        int getHeight() const;
    private:
        int width, height;
        std::vector<std::vector<bool>> grid;
};