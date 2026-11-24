// utils.cpp — part of pc-helper-ai.

#include "pchelperai/utils.h"

#include <cstdio>

namespace pchelperai {

Utils::Utils(const std::string& config_path)
    : config_path_(config_path) {}

void Utils::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Utils::run() {
    if (verbose_) std::fprintf(stderr, "[pc-helper-ai] utils: run\n");
    // core logic lives here
    return true;
}

}  // namespace pchelperai
