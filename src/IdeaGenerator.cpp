#include "IdeaGenerator.hpp"

std::string IdeaGenerator::generateIdea(const std::string& prompt) {

    if (prompt == "hell") {
        return "Hell theme with red colors and spikes";
    }

    if (prompt == "space") {
        return "Space theme with glow objects";
    }

    if (prompt == "forest") {
        return "Forest theme with green decorations";
    }

    return "Default Geometry Dash level";
}
