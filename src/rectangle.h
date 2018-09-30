/**
 * @file rectangle.h
 * @brief Function prototypes for the Rectangle library
 *
 * Function prototypes for calculating area and perimeter
 * of a rectangle by its sides
 *
 * @author Nikita Ostaplyuk
 * @date 30 September 2018
 */

#include <utility>

#ifndef RECTANGLEPROJECT_RECTANGLE_H
#define RECTANGLEPROJECT_RECTANGLE_H

namespace rectangle_project {
    /**
     * @struct RectangleAreaPerimeter
     * @brief A struct containing area and perimeter of a rectangle
     */
    struct RectangleAreaPerimeter {
        unsigned long int area; ///< the area of the rectangle
        unsigned long int perimeter; ///< the perimeter of the rectangle
    };

    /**
     * @struct RectangleSides
     * @brief A struct containing sides of a rectangle
     */
    struct RectangleSides {
        unsigned int a; ///< one of the sides of a rectangle
        unsigned int b; ///< another side of a rectangle
    };

    /**
     * @brief Function that calculates area of a rectangle by its sides
     * @param a one of the sides of a rectangle
     * @param b another side of a rectangle
     * @return area of a rectangle with given sides
     */
    unsigned long int rectangleArea(unsigned int a, unsigned int b);

    /**
     * @brief Function that calculates perimeter of a rectangle by its sides
     * @param a one of the sides of a rectangle
     * @param b another side of a rectangle
     * @return perimeter of a rectangle with given sides
     */
    unsigned long int rectanglePerimeter(unsigned int a, unsigned int b);

    /**
     * @brief A function calculating the area and the perimeter of the rectangle by its sides
     * @param a one of the sides of the rectangle
     * @param b another side of the rectangle
     * @param area a reference to a variable used to return the area
     * @param perimeter a reference to a variable used to return the perimeter
     * @return a void instance but changes the area and perimeter params as references
     */
    void rectangle(unsigned int a, unsigned int b, unsigned long int &area, unsigned long int &perimeter);

    /**
     * @brief A function calculating the area and the perimeter of the rectangle by its sides
     * @param a one of the sides of the rectangle
     * @param b another side of the rectangle
     * @param perimeter a reference to a variable that is used to return the perimeter
     * @return area of a rectangle with given sides
     */
    unsigned long int rectangle(unsigned int a, unsigned int b, unsigned long int &perimeter);

    /**
     * @brief A function calculating the area and the perimeter of the rectangle by its sides
     * @param a one of the sides of the rectangle
     * @param b another side of the rectangle
     * @return RectangleAreaPerimeter structure with calculated area and perimeter
     * @see RectangleAreaPerimeter
     */
    RectangleAreaPerimeter rectangle(unsigned int a, unsigned int b);

    /**
     * @brief A function calculating the area and the perimeter of the rectangle by its sides
     * @param a one of the sides of the rectangle
     * @param b another side of the rectangle
     * @param area_perimeter a reference to a RectangleAreaPerimeter structure used to return the results of the calculation
     * @return a void, area_perimeter reference is used to return the results of calculation
     * @see RectangleAreaPerimeter
     */
    void rectangle(unsigned int a, unsigned int b, RectangleAreaPerimeter &area_perimeter);

    /**
     * @brief A function calculating the area and the perimeter of the rectangle by its sides
     * @param sides a RectangleSides structure that contains the rectangle sides for calculation
     * @param area_perimeter a reference to a RectangleAreaPerimeter structure used to return the results of the calculation
     * @return a void, area_perimeter reference is used to return the results of calculation
     * @see RectangleAreaPerimeter
     * @see RectangleSides
     */
    void rectangle(RectangleSides sides, RectangleAreaPerimeter &area_perimeter);

    /**
     * @brief A function calculating the area and the perimeter of the rectangle by its sides
     * @param sides a RectangleSides structure that contains the rectangle sides for calculation
     * @return a RectangleAreaPerimeter structure that contains the results of the calculations
     * @see RectangleAreaPerimeter
     * @see RectangleSides
     */
    RectangleAreaPerimeter rectangle(RectangleSides sides);

    /**
     * @brief A function calculating the area and the perimeter of the rectangle by its sides
     * @param a one of the sides of the rectangle
     * @param b another side of the rectangle
     * @return a unsigned long int, unsigned long int pair with the results of the calculations
     */
    std::pair<unsigned long int, unsigned long int> rectanglePair(unsigned int a, unsigned int b);

}

#endif //RECTANGLEPROJECT_RECTANGLE_H