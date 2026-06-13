#include "AISystem.hpp"
#include "EditorLayerBridge.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

void AISystem::generate(const std::string& prompt) {
    auto editor = EditorLayerBridge::editor;

    if (!editor) {
        log::error("EditorLayer not found");
        return;
    }

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

        log::info("10 spikes created");
        return;
    }
}
