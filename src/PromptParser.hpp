#pragma once

#include <string>
#include "LevelConfig.hpp"

class PromptParser {
public:
    static LevelConfig parse(
        const std::string& prompt
    );
};
