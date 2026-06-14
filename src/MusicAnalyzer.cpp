#include "MusicAnalyzer.hpp"

std::vector<MusicSection> MusicAnalyzer::analyze(float bpm) {
    std::vector<MusicSection> result;

    result.push_back({
        0.f,
        10.f,
        "intro"
    });

    return result;
}
