#include <fmt/chrono.h>
#include <fmt/format.h>
#include <vector>

#include "CLI/CLI.hpp"
#include "config.h"

void print_vec(std::vector<int> &vec){
    
    fmt::print("{}", "[");

    for (int x : vec)
        fmt::print("{} ", x);

    fmt::print("{}\n", "]");
}

auto main(int argc, char **argv) -> int
{
    /**
     * CLI11 is a command line parser to add command line options
     * More info at https://github.com/CLIUtils/CLI11#usage
     */

    int count = 20;

    CLI::App app{PROJECT_NAME};
    try
    {
        app.set_version_flag("-V,--version", fmt::format("{} {}", PROJECT_VER, PROJECT_BUILD_DATE));
        app.parse(argc, argv);

        app.add_option("-c,--count", count, "Input value of count");
    }
    catch (const CLI::ParseError &e)
    {
        return app.exit(e);
    }


    std::vector<int> vec(count);

    for(int i = 0; i < count; i++){

        vec[i] = rand() % 100 + 1;

    }

    print_vec(vec);

    sort(vec.begin(), vec.end());

    print_vec(vec);

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", app.get_name());

    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
