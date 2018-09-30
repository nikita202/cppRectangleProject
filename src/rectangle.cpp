/**
 * @file rectangle.cpp
 * @brief Rectangle library
 *
 * Functions for calculating area and perimeter
 * of a rectangle by its sides
 *
 * @author Nikita Ostaplyuk
 * @date 30 September 2018
 */

#include "rectangle.h"

namespace rectangle_project {

    unsigned long int rectangleArea(unsigned int a, unsigned int b) {
        return a * b;
    }

    unsigned long int rectanglePerimeter(unsigned int a, unsigned int b) {
        return (a + b) * 2;
    }

    void rectangle(unsigned int a, unsigned int b, unsigned long int &area, unsigned long int &perimeter) {
        area = rectangleArea(a, b);
        perimeter = rectanglePerimeter(a, b);
    }

    unsigned long int rectangle(unsigned int a, unsigned int b, unsigned long int &perimeter) {
        perimeter = rectanglePerimeter(a, b);
        return rectangleArea(a, b);
    }

    RectangleAreaPerimeter rectangle(unsigned int a, unsigned int b) {
        return {rectangleArea(a, b), rectanglePerimeter(a, b)};
    }

    void rectangle(unsigned int a, unsigned int b, RectangleAreaPerimeter &area_perimeter) {
        area_perimeter = {rectangleArea(a, b), rectanglePerimeter(a, b)};
    }

    void rectangle(RectangleSides sides, RectangleAreaPerimeter &area_perimeter) {
        area_perimeter = {rectangleArea(sides.a, sides.b), rectanglePerimeter(sides.a, sides.b)};
    }

    RectangleAreaPerimeter rectangle(RectangleSides sides) {
        return {rectangleArea(sides.a, sides.b), rectanglePerimeter(sides.a, sides.b)};
    }

    std::pair<unsigned long int, unsigned long int> rectanglePair(unsigned int a, unsigned int b) {
        return std::make_pair(rectangleArea(a, b), rectanglePerimeter(a, b));
    }

}