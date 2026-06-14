#include "IdeaGenerator.hpp"

std::string IdeaGenerator::generate(const std::string& prompt) {
    if (prompt == "hell") {
        return "Hell theme";
    }

    if (prompt == "space") {
        return "Space theme";
    }

    if (prompt == "water") {
        return "Water theme";
    }

    return "Default level";
}
