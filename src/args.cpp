#include <iostream>
#include <string>
#include <vector>


int main(int argc, char* argv[])
{
    std::vector<std::string> args(argv + 1, argv + argc);

    if (args.empty())
    {
        std::cout << "No arguments provided. Use --help for usage information. \n";
        return 0;
    }
    
    for (const auto& arg: args)
    {
        if (arg == "--help" || arg == "-h")
        {
            std::cout << "Use: ./simulation [options]\n";
            std::cout << "Options: \n";
            std::cout << " -h, --help:   Show this help message\n";
            std::cout << " -v, --version: Show version information\n";
        }
        else if (arg == "--version" || arg == "-v")
        {
            std::cout << "Time Travel Simulator -- Version: 1.0.0\n";
        }
        else if (arg == "--debug")
        {
            std::cout << "Debug mode enabled.\n";
        }
        else if (arg == "--wormhole")
        {
            std::cout << "Wormhole mode enabled.\n";
        }
        else
        {
            std::cout << "Unknown argument: " << arg << "\n";
        }
    }

    return 0;
}