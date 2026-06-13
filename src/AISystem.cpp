#include "AISystem.hpp"
#include "EditorLayerBridge.hpp"

#include <Geode/Geode.hpp>
#include <algorithm>

using namespace geode::prelude;

void AISystem::generate(const std::string& prompt) {
auto editor = EditorLayerBridge::editor;

if (!editor) {
    log::error("Editor not found");
    return;
}

std::string cmd = prompt;

std::transform(
    cmd.begin(),
    cmd.end(),
    cmd.begin(),
    ::tolower
);

if (cmd == "spike") {
    auto obj = editor->createObject(
        1,
        cocos2d::CCPoint(100.f, 100.f),
        false
    );

    if (obj) {
        editor->addObject(obj);
        log::info("Spike created");
    }

    return;
}

if (cmd == "10 spikes") {
    for (int i = 0; i < 10; i++) {
        auto obj = editor->createObject(
            1,
            cocos2d::CCPoint(
                100.f + i * 30.f,
                100.f
            ),
            false
        );

        if (obj) {
            editor->addObject(obj);
        }
    }

    log::info("10 spikes created");
    return;
}

if (cmd == "cube") {
    log::info("Generate cube section");
    return;
}

if (cmd == "wave") {
    log::info("Generate wave section");
    return;
}

if (cmd == "ship") {
    log::info("Generate ship section");
    return;
}

if (cmd == "portal") {
    log::info("Generate portal");
    return;
}

if (cmd == "auto level") {
    log::info("Generate auto level");
    return;
}

log::warn("Unknown command: {}", cmd);

}
