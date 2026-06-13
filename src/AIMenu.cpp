#include "AIMenu.hpp"
#include "AISystem.hpp"

using namespace geode::prelude;

bool AIMenu::setup() {
    this->setTitle("AI Generator");

    m_input = TextInput::create(220.f, "Enter command...");
    m_input->setPosition({ 0.f, 20.f });

    m_mainLayer->addChild(m_input);

    auto spr = ButtonSprite::create(
        "Generate",
        "goldFont.fnt",
        "GJ_button_01.png",
        0.8f
    );

    auto btn = CCMenuItemSpriteExtra::create(
        spr,
        this,
        menu_selector(AIMenu::onGenerate)
    );

    btn->setPosition({ 0.f, -30.f });

    auto menu = CCMenu::create();
    menu->setPosition({ 0.f, 0.f });

    menu->addChild(btn);

    m_mainLayer->addChild(menu);

    return true;
}

void AIMenu::onGenerate(CCObject*) {
    std::string prompt = m_input->getString();

    AISystem::generate(prompt);

    FLAlertLayer::create(
        "AI",
        ("Generated: " + prompt).c_str(),
        "OK"
    )->show();
}

void AIMenu::open() {
    AIMenu::create()->show();
}
