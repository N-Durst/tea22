#include <fmt/chrono.h>
#include <fmt/format.h>

#include "linkedList.h"


auto main(int argc, char** argv) -> int
{

    List_t myList;

    insertAtBeginning(&myList, 1);

    insertAtTheEnd(&myList, 2);

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", argv[0]);

    fmt::print("Data from Head {} \n", myList.pHead->data);

    fmt::print("Data from Tail {} \n", myList.pTail->data);

    return 0; /* exit gracefully*/
}
