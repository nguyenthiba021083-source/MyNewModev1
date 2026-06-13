#include "AIMenu.hpp"
#include "AISystem.hpp"

#include <Geode/Geode.hpp>
#include <Geode/ui/TextInput.hpp>

using namespace geode::prelude;

static TextInput* s_input = nullptr;

bool AIMenu::setup() {
    this->setTitle("AI Level Generator");

    s_input = TextInput::create(220.f, "spike / wave / ship");

    if (s_input) {
        s_input->setPosition({ 0.f, 20.f });
        m_mainLayer->addChild(s_input);
    }

    auto label = CCLabelBMFont::create(
        "Generate",
        "goldFont.fnt"
    );

    auto btn =
        CCMenuItemSpriteExtra::create(
            label,
            this,
            menu_selector(AIMenu::onGenerate)
        );

    btn->setPosition({ 0.f, -30.f });

    auto menu = CCMenu::create();
    menu->addChild(btn);
    menu->setPosition({ 0.f, 0.f });

    m_mainLayer->addChild(menu);

    return true;
}

void AIMenu::onGenerate(CCObject*) {
    if (!s_input)
        return;

    AISystem::generate(
        s_input->getString()
    );

    FLAlertLayer::create(
        "AI Generator",
        "Command sent!",
        "OK"
    )->show();
}

AIMenu* AIMenu::create() {
    auto ret = new AIMenu();

    if (ret && ret->initAnchored(300.f, 180.f)) {
        ret->autorelease();
        return ret;
    }

    delete ret;
    return nullptr;
}
