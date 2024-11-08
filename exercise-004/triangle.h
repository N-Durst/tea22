#ifndef TRIANGLE_H
#define TRIANGLE_H

struct Triangle{

    float a;

    float b;

    float c;
};

Triangle* newTriangle();

void freeTriangle(Triangle* ptr);


#endif