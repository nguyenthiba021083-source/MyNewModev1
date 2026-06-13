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

        auto obj = editor->createObject(
            1,
            cocos2d::CCPoint(100.f, 100.f),
            false
        );

        if (obj) {
            log::info("Spike created");
        }

        return;
    }

    if (prompt == "10 spikes") {

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
                log::info("Spike {}", i);
            }
        }

        return;
    }

    log::warn("Unknown command");
}
