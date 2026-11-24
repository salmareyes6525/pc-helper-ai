// cli.cpp — part of pc-helper-ai.

#include "pchelperai/cli.h"

#include <cstdio>

namespace pchelperai {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[pc-helper-ai] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace pchelperai
