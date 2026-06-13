#include "ThemeSystem.hpp"
#include "ObjectDatabase.hpp"

int ThemeSystem::getBlockID(
    Theme theme
) {
    switch (theme) {

        case Theme::Basic:
            return ObjectDB::BLOCK;

        case Theme::Modern:
            return ObjectDB::BLOCK;

        case Theme::Hell:
            return ObjectDB::BLOCK;

        case Theme::Space:
            return ObjectDB::BLOCK;

        case Theme::Forest:
            return ObjectDB::BLOCK;

        case Theme::Tech:
            return ObjectDB::BLOCK;

        case Theme::NineCircles:
            return ObjectDB::BLOCK;

        default:
            return ObjectDB::BLOCK;
    }
}

int ThemeSystem::getGlowID(
    Theme theme
) {
    switch (theme) {

        case Theme::Basic:
            return ObjectDB::GLOW;

        case Theme::Modern:
            return ObjectDB::GLOW;

        case Theme::Hell:
            return ObjectDB::GLOW;

        case Theme::Space:
            return ObjectDB::GLOW;

        case Theme::Forest:
            return ObjectDB::GLOW;

        case Theme::Tech:
            return ObjectDB::GLOW;

        case Theme::NineCircles:
            return ObjectDB::GLOW;

        default:
            return ObjectDB::GLOW;
    }
}
