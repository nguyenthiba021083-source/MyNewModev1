#include "AISystem.hpp"
#include "IdeaGenerator.hpp"

std::string AISystem::processPrompt(const std::string& prompt) {
    std::string idea = IdeaGenerator::generate(prompt);
    return idea;
}
