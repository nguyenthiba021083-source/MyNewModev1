#include "EditorLayerBridge.hpp"
#include "AIMenu.hpp"

#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude::*;

class $modify(EditorUIHook, EditorUI) {
public:
    bool init(LevelEditorLayer* editorLayer) {
        if (!EditorUI::init(editorLayer)) {
            return false;
        }

        // Lưu EditorLayer để AI sử dụng
        EditorLayerBridge::editor = editorLayer;

        log::info("EditorUI Hook Loaded");

        // Tạo icon AI
        auto sprite = CCSprite::createWithSpriteFrameName(
            "GJ_plusBtn_001.png"
        );

        if (!sprite) {
            log::error("Failed to create AI button sprite");
            return true;
        }

        sprite->setScale(0.9f);

        auto btn = CCMenuItemSpriteExtra::create(
            sprite,
            this,
            menu_selector(EditorUIHook::onAIButton)
        );

        if (!btn) {
            log::error("Failed to create AI button");
            return true;
        }

        btn->setScale(0.9f);

        // Thêm vào toolbar editor
        if (m_toolbarMenu) {
            m_toolbarMenu->addChild(btn);

            // Điều chỉnh vị trí nếu cần
            btn->setPosition({-180.f, 110.f});

            log::info("AI Button Added");
        }
        else {
            log::error("m_toolbarMenu is null");
        }

        return true;
    }

    void onAIButton(CCObject*) {
        log::info("AI Button Pressed");

        // Mở menu AI
        AIMenu::open();
    }
};
