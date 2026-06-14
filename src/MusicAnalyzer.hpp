#pragma once

#include <vector>

struct MusicSection {
    float start;
    float end;

    std::string type;
};

class MusicAnalyzer {
public:
    static std::vector<MusicSection>
    analyze(float bpm);
};
