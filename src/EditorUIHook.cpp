#include "EditorLayerBridge.hpp"
#include "AIMenu.hpp"

#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

class $modify(EditorUIHook, EditorUI) {
public:
    bool init(LevelEditorLayer* editorLayer) {
        if (!EditorUI::init(editorLayer))
            return false;

        EditorLayerBridge::editor = editorLayer;

        FLAlertLayer::create(
            "AI Debug",
            "EditorUI Hook Loaded",
            "OK"
        )->show();

        auto sprite = CCSprite::createWithSpriteFrameName(
            "GJ_plusBtn_001.png"
        );

        if (!sprite)
            return true;

        auto btn = CCMenuItemSpriteExtra::create(
            sprite,
            this,
            menu_selector(Editor
