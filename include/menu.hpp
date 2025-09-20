#pragma once

class menu {
    public:
        menu();
        void play();
        void instructions();
        void highscore();
        void display();
    private:
        int selectedOption;
};