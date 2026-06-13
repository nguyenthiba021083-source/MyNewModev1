#include "AISystem.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

void AISystem::generate(std::string prompt) {
    log::info("AI Prompt: {}", prompt);

    if (prompt == "spike") {
        log::info("Generate spike");
    }
    else if (prompt == "10 spikes") {
        log::info("Generate 10 spikes");
    }
    else if (prompt == "cube") {
        log::info("Generate cube section");
    }
    else if (prompt == "wave") {
        log::info("Generate wave section");
    }
    else if (prompt == "ship") {
        log::info("Generate ship section");
    }
    else if (prompt == "portal") {
        log::info("Generate portal");
    }
    else if (prompt == "auto level") {
        log::info("Generate full level");
    }
    else {
        log::warn("Unknown command");
    }
}
