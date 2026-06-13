#include "LevelGenerator.hpp"
#include "PatternGenerator.hpp"
#include "AutoDecoEngine.hpp"

void LevelGenerator::generate(
    const LevelConfig& cfg
) {
    PatternGenerator::generate(cfg);

    if (cfg.autoDeco) {
        AutoDecoEngine::decorate(cfg);
    }
}
