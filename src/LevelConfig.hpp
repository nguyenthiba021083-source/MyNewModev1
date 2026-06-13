#pragma once

#include <string>

enum class Theme {
    Basic,
    Modern,
    Hell,
    Space,
    Forest,
    Tech,
    NineCircles
};

enum class Difficulty {
    Easy,
    Normal,
    Hard,
    Harder,
    Insane,
    Demon
};

struct LevelConfig {
    Theme theme = Theme::Basic;
    Difficulty difficulty = Difficulty::Normal;

    bool autoDeco = true;
    bool glow = true;

    int length = 1000;
};
