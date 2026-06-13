#pragma once

#include <Geode/ui/Popup.hpp>
#include <Geode/Geode.hpp>

using namespace geode::prelude;

class AIMenu : public geode::Popup<> {
protected:
    bool setup();
    void onGenerate(CCObject*);

public:
    static AIMenu* create();
};
