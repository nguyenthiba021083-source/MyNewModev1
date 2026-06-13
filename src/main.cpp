#include <Geode/Geode.hpp>

using namespace geode::prelude;

$on_mod(Loaded) {
    log::info("AI Level Generator Loaded");

    FLAlertLayer::create(
        "AI Level Generator",
        "Mod Loaded Successfully",
        "OK"
    )->show();
}
