#pragma once
#include "AISystem.hpp"
#include "LevelGenerator.hpp"

void AISystem::generate(
    const std::string& prompt
) {
    LevelGenerator::generate(prompt);
}
