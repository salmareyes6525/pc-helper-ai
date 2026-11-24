// voice.cpp — part of pc-helper-ai.

#include "pchelperai/voice.h"

#include <cstdio>

namespace pchelperai {

Voice::Voice(const std::string& config_path)
    : config_path_(config_path) {}

void Voice::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Voice::run() {
    if (verbose_) std::fprintf(stderr, "[pc-helper-ai] voice: run\n");
    // core logic lives here
    return true;
}

}  // namespace pchelperai
