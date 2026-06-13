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

        log::info("EditorUI Hook Loaded");

        auto sprite = CCSprite::createWithSpriteFrameName(
            "GJ_plusBtn_001.png"
        );

        if (!sprite) {
            log::error("Failed to create sprite");
            return true;
        }

        auto btn = CCMenuItemSpriteExtra::create(
            FLAlertLayer::create(
    "AI Debug",
    "Button Created",
    "OK"
)->show();
        );

        btn->setPosition(ccp(-160.f, 90.f));

        auto menu = this->getChildByType<CCMenu>(0);

        if (menu) {
            menu->addChild(btn);
            log::info("AI Button Added");
        }
        else {
            log::error("CCMenu not found");
        }

        return true;
    }

    void onAIButton(CCObject*) {
        log::info("AI Button Pressed");

        AIMenu::open();
    }
};
