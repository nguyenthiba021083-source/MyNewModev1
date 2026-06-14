#include "EditorLayerBridge.hpp"

auto editor = EditorLayerBridge::editor;

if (editor) {
    auto obj = editor->createObject(8, {150.f, 90.f}, false);
    editor->addObject(obj);
}
