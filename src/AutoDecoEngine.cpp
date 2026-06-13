#include "AutoDecoEngine.hpp"
#include "LevelConfig.hpp"
#include "ObjectDatabase.hpp"
#include "ThemeSystem.hpp"
#include "EditorLayerBridge.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

void AutoDecoEngine::decorate(
    const LevelConfig& cfg
) {
    auto editor = EditorLayerBridge::editor;

    if (!editor) {
        log::error("AutoDecoEngine: Editor not found");
        return;
    }

    log::info("AutoDecoEngine started");

    switch (cfg.theme) {
        case Theme::Basic:
            log::info("Theme: Basic");
            break;

        case Theme::Modern:
            log::info("Theme: Modern");
            break;

        case Theme::Hell:
            log::info("Theme: Hell");
            break;

        case Theme::Space:
            log::info("Theme: Space");
            break;

        case Theme::Forest:
            log::info("Theme: Forest");
            break;

        case Theme::Tech:
            log::info("Theme: Tech");
            break;

        case Theme::NineCircles:
            log::info("Theme: NineCircles");
            break;
    }

    log::info("AutoDecoEngine finished");
}
