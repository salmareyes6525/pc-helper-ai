// diag.cpp — part of pc-helper-ai.

#include "pchelperai/diag.h"

#include <cstdio>

namespace pchelperai {

Diag::Diag(const std::string& config_path)
    : config_path_(config_path) {}

void Diag::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Diag::run() {
    if (verbose_) std::fprintf(stderr, "[pc-helper-ai] diag: run\n");
    // core logic lives here
    return true;
}

}  // namespace pchelperai
