// fixer — part of pc-helper-ai.

#pragma once

#include <string>
#include <vector>

namespace pchelperai {

class Fixer {
public:
    explicit Fixer(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace pchelperai
