#include "AISystem.hpp"
#include "LevelGenerator.hpp"

void AISystem::generate(
    const std::string& prompt
) {
    LevelConfig cfg;

    LevelGenerator::generate(cfg);
}
