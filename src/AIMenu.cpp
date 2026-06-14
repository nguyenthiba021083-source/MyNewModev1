#include "AIMenu.hpp"
#include "AISystem.hpp"

#include <Geode/Geode.hpp>

using namespace geode::prelude;

void AIMenu::open() {
    log::info("AI Menu Opened");

    AISystem::generate("spike");
}
