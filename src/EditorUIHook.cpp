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

        if (!sprite) {
            FLAlertLayer::create(
                "AI Debug",
                "Sprite Failed",
                "OK"
            )->show();

            return true;
        }

        auto btn = CCMenuItemSpriteExtra::create(
            sprite,
            this,
            menu_selector(EditorUIHook::onAIButton)
        );

        btn->setScale(1.0f);
        btn->setPosition(ccp(150.f, 80.f));

        auto menu = this->getChildByType<CCMenu>(0);

        if (menu) {
            menu->addChild(btn);

            FLAlertLayer::create(
                "AI Debug",
                "AI Button Added",
                "OK"
            )->show();
        }
        else {
            FLAlertLayer::create(
                "AI Debug",
                "Menu Not Found",
                "OK"
            )->show();
        }

        return true;
    }

    void onAIButton(CCObject*) {
        AIMenu::open();
    }
};
