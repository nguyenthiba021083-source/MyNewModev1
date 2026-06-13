#include "EditorLayerBridge.hpp"
#include "AIMenu.hpp"

#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude::*;

class $modify(EditorUIHook, EditorUI) {
public:
    bool init(LevelEditorLayer* editorLayer) {
        if (!EditorUI::init(editorLayer))
            return false;

        EditorLayerBridge::editor = editorLayer;

        log::info("EditorUI Hook Loaded");

        auto sprite =
            CCSprite::createWithSpriteFrameName("GJ_plusBtn_001.png");

        if (!sprite) {
            log::error("Failed to create sprite");
            return true;
        }

        auto btn = CCMenuItemSpriteExtra::create(
            sprite,
            this,
            menu_selector(EditorUIHook::onAIButton)
        );

        if (!btn) {
            log::error("Failed to create button");
            return true;
        }

        btn->setScale(0.9f);

        if (m_toolbarMenu) {
            m_toolbarMenu->addChild(btn);

            btn->setPosition({-170.f, 90.f});

            log::info("AI Button Added");
        }
        else {
            log::error("m_toolbarMenu is null");
        }

        return true;
    }

    void onAIButton(CCObject*) {
        log::info("AI Button Pressed");
        AIMenu::open();
    }
};
