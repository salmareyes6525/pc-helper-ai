// main.cpp — entry point. Wires config and subsystems together.

#include "pchelperai/settings.h"
#include "pchelperai/voice.h"
#include "pchelperai/diag.h"
#include "pchelperai/fixer.h"
#include "pchelperai/cli.h"
#include "pchelperai/utils.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    pchelperai::Settings settings = pchelperai::Settings::load_default();
    pchelperai::Voice voice(settings.store_path);
    pchelperai::Diag diag(settings.store_path);
    pchelperai::Fixer fixer(settings.store_path);
    pchelperai::Cli cli(settings.store_path);
    pchelperai::Utils utils(settings.store_path);
    std::fprintf(stderr, "[pc-helper-ai] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
