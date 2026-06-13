#include "AISystem.hpp"

using namespace geode::prelude;

void AISystem::generate(std::string const& prompt) {
    log::info("AI Prompt: {}", prompt);

    if (prompt == "spike") {
        log::info("Generate spike");
    }
    else if (prompt == "cube") {
        log::info("Generate cube");
    }
    else if (prompt == "wave") {
        log::info("Generate wave");
    }
    else {
        log::info("Unknown command");
    }
}
