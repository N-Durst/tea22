#include <fmt/chrono.h>
#include <fmt/format.h>
#include "test.h"

int main(int argc, char** argv)
{

    unsigned int data = 0;

    //unsigned int *pData = &data;

    myFunction(&data, 3);

    fmt::println("Wert von Data: {}",data);

    return 0; /* exit gracefully*/
}