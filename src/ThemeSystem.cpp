#include "ThemeSystem.hpp"
#include "ObjectDatabase.hpp"

int ThemeSystem::getBlockID(Theme theme) {
    switch (theme) {

        case Theme::Basic:
            return ObjectDatabase::BLOCK_BASIC;

        case Theme::Modern:
            return ObjectDatabase::BLOCK_MODERN;

        case Theme::Hell:
            return ObjectDatabase::BLOCK_HELL;

        case Theme::Space:
            return ObjectDatabase::BLOCK_SPACE;

        case Theme::Forest:
            return ObjectDatabase::BLOCK_FOREST;

        case Theme::Tech:
            return ObjectDatabase::BLOCK_TECH;

        case Theme::NineCircles:
            return ObjectDatabase::BLOCK_NINECIRCLES;

        default:
            return ObjectDatabase::BLOCK_BASIC;
    }
}

int ThemeSystem::getGlowID(Theme theme) {
    switch (theme) {

        case Theme::Basic:
            return ObjectDatabase::GLOW_BASIC;

        case Theme::Modern:
            return ObjectDatabase::GLOW_MODERN;

        case Theme::Hell:
            return ObjectDatabase::GLOW_HELL;

        case Theme::Space:
            return ObjectDatabase::GLOW_SPACE;

        case Theme::Forest:
            return ObjectDatabase::GLOW_FOREST;

        case Theme::Tech:
            return ObjectDatabase::GLOW_TECH;

        case Theme::NineCircles:
            return ObjectDatabase::GLOW_NINECIRCLES;

        default:
            return ObjectDatabase::GLOW_BASIC;
    }
}
