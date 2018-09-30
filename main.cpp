#include <iostream>
#include <string>
#include <utility>

#include "rectangle.h"

using namespace rectangle_project;

int main() {
    unsigned int a;
    unsigned int b;
    unsigned long int area;
    unsigned long int perimeter;
    RectangleAreaPerimeter area_perimeter;
    RectangleSides sides;
    std::pair<unsigned long int, unsigned long int> area_perimeter_pair;

    std::cin >> a >> b;
    sides = {a, b};

    rectangle(a, b, area, perimeter);
    std::cout << area << " " << perimeter << std::endl;

    area = rectangle(a, b, perimeter);
    std::cout << area << " " << perimeter << std::endl;

    area_perimeter = rectangle(a, b);
    std::cout << area_perimeter.area << " " << area_perimeter.perimeter << std::endl;

    rectangle(a, b, area_perimeter);
    std::cout << area_perimeter.area << " " << area_perimeter.perimeter << std::endl;

    rectangle(sides, area_perimeter);
    std::cout << area_perimeter.area << " " << area_perimeter.perimeter << std::endl;

    area_perimeter = rectangle(sides);
    std::cout << area_perimeter.area << " " << area_perimeter.perimeter << std::endl;

    area_perimeter_pair = rectanglePair(a, b);
    std::cout << area_perimeter_pair.first << " " << area_perimeter_pair.second << std::endl;

    return 0;
}