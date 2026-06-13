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
        log::error(
            "AutoDecoEngine: Editor not found"
        );
        return;
    }

    log::info(
        "AutoDecoEngine started"
    );

    log::info(
        "Theme = {}",
        cfg.theme.name
    );

    //
    // Future theme decoration system
    //

    if (cfg.theme == "default") {
        log::info(
            "Using default theme"
        );
    }
    else if (cfg.theme == "modern") {
        log::info(
            "Using modern theme"
        );
    }
    else if (cfg.theme == "hell") {
        log::info(
            "Using hell theme"
        );
    }
    else if (cfg.theme == "space") {
        log::info(
            "Using space theme"
        );
    }

    //
    // Future automatic decoration
    //

    log::info(
        "AutoDecoEngine finished"
    );
}
