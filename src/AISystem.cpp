#include "AISystem.hpp"
#include "EditorLayerBridge.hpp"

#include <Geode/Geode.hpp>
#include <algorithm>

using namespace geode::prelude;

void AISystem::generate(std::string prompt) {
    auto editor = EditorLayerBridge::editor;

    if (!editor) {
        log::error("Editor not found");
        return;
    }

    std::transform(
        prompt.begin(),
        prompt.end(),
        prompt.begin(),
        ::tolower
    );

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
        log::info("Generate auto level");
    }

    else {
        log::warn("Unknown command");
    }
}
