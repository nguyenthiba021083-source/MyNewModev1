#pragma once

#include <Geode/Geode.hpp>
#include <Geode/binding/LevelEditorLayer.hpp>

using namespace geode::prelude;

class EditorLayerBridge {
public:
    static LevelEditorLayer* editor;
};
