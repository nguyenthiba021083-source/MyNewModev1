#include "IdeaGenerator.hpp"

std::string IdeaGenerator::generate(const std::string& prompt) {
    if (prompt == "space")
        return "Space theme";

    if (prompt == "hell")
        return "Hell theme";

    return "Default level";
}
