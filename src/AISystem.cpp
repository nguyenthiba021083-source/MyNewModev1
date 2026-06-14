#include "AISystem.hpp"
#include "IdeaGenerator.hpp"

std::string AISystem::generate(const std::string& prompt) {
    return IdeaGenerator::generate(prompt);
}
