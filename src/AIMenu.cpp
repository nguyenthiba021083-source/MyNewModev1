#include "AIMenu.hpp"
#include "AISystem.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

void AIMenu::open() {
    FLAlertLayer::create(
        "AI Generator",
        "Testing AI...\nAutomatically generating spike.",
        "OK"
    )->show();

    AISystem::generate("spike");
}
