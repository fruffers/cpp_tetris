#pragma once
#include "block.hpp"

class Game {
    public:
        Game();
        void start();
        void pause();
        void resume();
        void end();
    private:
        bool isRunning;
        int score;
        std::vector<Block> blocks;
        Block blockTypes[7];
};