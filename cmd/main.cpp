#include <iostream>
#include "common.hpp"
using namespace std;

int main() {
    Rectangle rectangle = Rectangle(1, 2, 10, 20);
    cout << "Rectangle are: " << rectangle.area() << endl;
    return 0;
}