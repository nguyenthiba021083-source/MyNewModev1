#include "EditorLayerBridge.hpp"

using namespace geode::prelude;

void LevelGenerator::generate(
    const LevelConfig& cfg
) {
    auto editor = EditorLayerBridge::editor;

    if (!editor)
        return;

    auto obj = editor->createObject(1, {100.f, 100.f}, false);

    if (!obj)
        return;

    editor->addObject(obj);

    editor->updateVisibility();
}
