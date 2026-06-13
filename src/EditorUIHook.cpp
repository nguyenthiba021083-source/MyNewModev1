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

        // Save editor for AI system
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

        // Add button to editor menu
        if (this->m_buttonMenu) {
            this->m_buttonMenu->addChild(btn);
        }

        log::info("AI Button Added");

        return true;
    }

    void onAIButton(CCObject*) {
        AIMenu::open();
    }
};
