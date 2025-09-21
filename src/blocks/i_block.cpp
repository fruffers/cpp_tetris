#include "../../include/blocks/i_block.hpp"

void IBlock::rotate(std::string direction) {
    // Implement rotation logic specific to IBlock
    if (shape == std::vector<std::vector<int>>{{1, 1, 1, 1}}) {
        shape = {
            {1},
            {1},
            {1},
            {1}
        };
    } else {
        shape = {
            {1, 1, 1, 1}
        };
    }
}