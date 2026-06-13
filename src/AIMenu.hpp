#pragma once

#include <Geode/Geode.hpp>
#include <Geode/ui/TextInput.hpp>

using namespace geode::prelude;

class AIMenu : public Popup<> {
protected:
    TextInput* m_input;

    bool setup() override;

    void onGenerate(CCObject*);

public:
    static void open();
};
