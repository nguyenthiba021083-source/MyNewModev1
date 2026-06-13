#pragma once

#include <Geode/ui/Popup.hpp>

class AIMenu : public geode::Popup<> {
protected:
    bool setup() override;
    void onGenerate(cocos2d::CCObject*);

public:
    static AIMenu* create();
};
