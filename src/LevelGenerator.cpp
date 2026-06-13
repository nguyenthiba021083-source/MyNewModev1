#include "LevelGenerator.hpp"
#include "PromptParser.hpp"
#include "PatternGenerator.hpp"
#include "AutoDecoEngine.hpp"

void LevelGenerator::generate(
    const std::string& prompt
) {
    auto cfg =
        PromptParser::parse(prompt);

    PatternGenerator::generate(cfg);

    if (cfg.autoDeco) {
        AutoDecoEngine::decorate(cfg);
    }
}
