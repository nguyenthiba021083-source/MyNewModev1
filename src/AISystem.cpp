#include "AISystem.hpp"
#include "LevelGenerator.hpp"
#include "PromptParser.hpp"

void AISystem::generate(
    const std::string& prompt
) {
    LevelConfig cfg =
        PromptParser::parse(prompt);

    LevelGenerator::generate(cfg);
}
