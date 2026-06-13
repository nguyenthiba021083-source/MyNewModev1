#include "PromptParser.hpp"

LevelConfig PromptParser::parse(
    const std::string& prompt
) {
    LevelConfig cfg;

    if (prompt.find("hell") != std::string::npos)
        cfg.theme = Theme::Hell;

    if (prompt.find("modern") != std::string::npos)
        cfg.theme = Theme::Modern;

    if (prompt.find("demon") != std::string::npos)
        cfg.difficulty = Difficulty::Demon;

    return cfg;
}
