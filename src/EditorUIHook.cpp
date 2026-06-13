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

        // Debug popup để kiểm tra hook có chạy không
        FLAlertLayer::create(
            "AI Debug",
            "EditorUI Hook Loaded",
            "OK"
        )->show();

        // Lưu EditorLayer cho AI System
        EditorLayerBridge::editor = editorLayer;

        auto sprite = CCSprite::createWithSpriteFrameName(
            "GJ_plusBtn_001.png"
        );

        if (!sprite) {
            log::error("Failed to create AI button sprite");
            return true;
        }

        auto btn = CCMenuItemSpriteExtra::create(
            sprite,
            this,
            menu_selector(EditorUIHook::onAIButton)
        );

        btn->setPosition(ccp(-160.f, 90.f));

        auto menu = this->getChildByType<CCMenu>(0);

        if (menu) {
            menu->addChild(btn);
            log::info("AI Button Added");
        }
        else {
            log::error("Could not find CCMenu");
        }

        return true;
    }

    void onAIButton(CCObject*) {
        AIMenu::open();
    }
};
