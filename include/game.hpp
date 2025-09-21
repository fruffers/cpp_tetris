#pragma once
#include "block.hpp"
#include "board.hpp"

class Game {
    public:
        Game(Board boardParam) : board(boardParam), isRunning(false), score(0), blocks() {};
        void start();
        void update();
        void pause();
        void resume();
        void end();
        void collisionDetection();
    private:
        bool isRunning;
        int score;
        Board board;
        std::vector<Block> blocks;
};