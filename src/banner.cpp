#include <iostream>
#include <string>

void printBanner()
{
    std::cout << "\033[1;36m";

    std::cout << R"(

    ╔══════════════════════════════════════════════╗
    ║                                              ║
    ║         TIME TRAVEL SIMULATOR v1.0.0         ║
    ║                                              ║
    ║              Explore timelines.              ║
    ║           Don't change the story.            ║
    ║                                              ║
    ╚══════════════════════════════════════════════╝

)";

    std::cout << "\033[0m";
}