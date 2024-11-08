#include "triangle.h"
#include "stdlib.h"


unsigned int perimeter(Triangle* self){

    return self->a + self->b + self->c;
}

Triangle* newTriangle(){

    Triangle* temp = (Triangle*)malloc(sizeof(Triangle));

    temp->a = 0;
    temp->b = 0;
    temp->c = 0;

    return temp;
}

void freeTriangle(Triangle* ptr){

    free(ptr);
}