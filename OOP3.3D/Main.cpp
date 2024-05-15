// main.cpp
#include "Triangle.h"
#include <iostream>
#include "TriangleC.h"

int main() {
    Triangle triangle;

    triangle.Read();
    triangle.Display();

    triangle++;
    triangle.Display();

    triangle--;
    triangle.Display();

    TriangleC triangleC;

    triangleC.Read();
    triangleC.Display();

    triangleC++;
    triangleC.Display();

    triangleC--;
    triangleC.Display();

    return 0;
}
