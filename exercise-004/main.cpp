#include <fmt/chrono.h>
#include <fmt/format.h>
#include "triangle.h"


struct person
{
    /* data */
    unsigned int alter;

    float gewicht;

    char name[25];
};

person paul;

person *pPers;

auto main(int argc, char** argv) -> int
{
    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     * */

    paul.alter = 23;

    paul.gewicht = 70.5;

    strncpy(paul.name, "Paul", sizeof(paul.name) / sizeof(paul.name[0]));

    pPers = &paul;
    
    fmt::print("{} ist {} Jahre alt\n", pPers->name, pPers->alter);

    fmt::print("Sein Name ist: {}", pPers->name);

    Triangle* trig = newTriangle();

    freeTriangle(trig);

    trig = newTriangle();
    

    return 0; /* exit gracefully*/
}