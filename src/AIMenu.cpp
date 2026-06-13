#include "AIMenu.hpp"
#include "AISystem.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

void AIMenu::open() {
    FLAlertLayer::create(
        "AI Generator",
        "AI Menu Loaded!",
        "OK"
    )->show();

    AISystem::generate("spike");
}
