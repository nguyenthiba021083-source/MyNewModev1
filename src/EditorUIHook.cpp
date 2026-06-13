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

        auto sprite =
            CCSprite::createWithSpriteFrameName(
                "GJ_plusBtn_001.png"
            );

        if (!sprite)
            return true;

        auto btn =
            CCMenuItemSpriteExtra::create(
                sprite,
                this,
                menu_selector(EditorUIHook::onAIButton)
            );

        btn->setPosition(ccp(-160.f, 90.f));

        auto menu = this->getChildByType<CCMenu>(0);

        if (menu) {
            menu->addChild(btn);
        }

        log::info("AI Button Added");

        return true;
    }

    void onAIButton(CCObject*) {
        log::info("Opening AI Menu");

        auto popup = AIMenu::create();

        if (popup) {
            popup->open();
        }
    }
};
