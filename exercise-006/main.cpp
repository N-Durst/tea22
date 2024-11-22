#include <fmt/chrono.h>
#include <fmt/format.h>

#include "linkedList.h"


auto main(int argc, char** argv) -> int
{

    List_t myList;

    for(int i = 1; i <= 3; i++){

         insertAtTheEnd(&myList, i);

    }


    deleteFromPos(&myList, 2);

    ListNode_t* temp = myList.pHead;

    for(int i = 1; i <= (myList.size); i++){

        fmt::print("Data of List: {} \n",temp->data);
        temp = temp->pNext;

    }

    free(temp);

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", argv[0]);


    return 0; /* exit gracefully*/
}
