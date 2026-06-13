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

    // Spike
    if (prompt == "spike") {

        auto obj = editor->createObject(
            1,                      // Spike ID
            cocos2d::CCPoint(100.f, 100.f)
        );

        if (obj) {
            editor->addObject(obj);
            log::info("Placed spike");
        }

        return;
    }

    // 10 spikes
    if (prompt == "10 spikes") {

        for (int i = 0; i < 10; i++) {

            auto obj = editor->createObject(
                1,
                cocos2d::CCPoint(
                    100.f + i * 30.f,
                    100.f
                )
            );

            if (obj) {
                editor->addObject(obj);
            }
        }

        log::info("Placed 10 spikes");
        return;
    }

    // Portal
    if (prompt == "portal") {

        auto obj = editor->createObject(
            12,                     // Cube portal
            cocos2d::CCPoint(200.f, 100.f)
        );

        if (obj) {
            editor->addObject(obj);
        }

        log::info("Placed portal");
        return;
    }

    // Cube section
    if (prompt == "cube") {

        for (int i = 0; i < 20; i++) {

            auto block = editor->createObject(
                1,
                cocos2d::CCPoint(
                    100.f + i * 30.f,
                    60.f
                )
            );

            if (block) {
                editor->addObject(block);
            }
        }

        log::info("Generated cube section");
        return;
    }

    // Wave
    if (prompt == "wave") {

        auto portal = editor->createObject(
            660,                    // Wave portal
            cocos2d::CCPoint(150.f, 100.f
