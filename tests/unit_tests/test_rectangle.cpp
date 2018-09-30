#include <iostream>

#include "gtest/gtest.h"
#include "rectangle.h"

using namespace rectangle_project;
using ::testing::TestWithParam;
using ::testing::tuple;


class TestRectangle : public TestWithParam<
        tuple<unsigned int, unsigned int, unsigned long int, unsigned long int> > {
protected:
    unsigned int currentA, currentB;
    unsigned long int expectedArea, expectedPerimeter;

    virtual void SetUp() {
        std::tie(currentA, currentB, expectedArea, expectedPerimeter) = GetParam();
    }

};

TEST_P(TestRectangle, Rectangle_A_B_RefArea_RefPerimeter) {
    unsigned long int area;
    unsigned long int perimeter;

    rectangle(currentA, currentB, area, perimeter);
    EXPECT_EQ(expectedArea, area);
    EXPECT_EQ(expectedPerimeter, perimeter);
}

TEST_P(TestRectangle, Rectangle_A_B_RefPerimeter) {
    unsigned long int area;
    unsigned long int perimeter;

    area = rectangle(currentA, currentB, perimeter);
    EXPECT_EQ(expectedArea, area);
    EXPECT_EQ(expectedPerimeter, perimeter);
}

TEST_P(TestRectangle, Rectangle_A_B) {
    RectangleAreaPerimeter area_perimeter;

    area_perimeter = rectangle(currentA, currentB);
    EXPECT_EQ(expectedArea, area_perimeter.area);
    EXPECT_EQ(expectedPerimeter, area_perimeter.perimeter);
}

TEST_P(TestRectangle, Rectangle_A_B_RefAreaPerimeter) {
    RectangleAreaPerimeter area_perimeter;

    rectangle(currentA, currentB, area_perimeter);
    EXPECT_EQ(expectedArea, area_perimeter.area);
    EXPECT_EQ(expectedPerimeter, area_perimeter.perimeter);
}

TEST_P(TestRectangle, Rectangle_RectangleSides_RefAreaPerimeter) {
    RectangleAreaPerimeter area_perimeter;
    RectangleSides sides = {currentA, currentB};

    rectangle(sides, area_perimeter);
    EXPECT_EQ(expectedArea, area_perimeter.area);
    EXPECT_EQ(expectedPerimeter, area_perimeter.perimeter);
}

TEST_P(TestRectangle, Rectangle_RectangleSides) {
    RectangleAreaPerimeter area_perimeter;
    RectangleSides sides = {currentA, currentB};

    area_perimeter = rectangle(sides);
    EXPECT_EQ(expectedArea, area_perimeter.area);
    EXPECT_EQ(expectedPerimeter, area_perimeter.perimeter);
}

TEST_P(TestRectangle, RectanglePair) {
    std::pair<unsigned long int, unsigned long int> area_perimeter;

    area_perimeter = rectanglePair(currentA, currentB);
    EXPECT_EQ(expectedArea, area_perimeter.first);
    EXPECT_EQ(expectedPerimeter, area_perimeter.second);
}

INSTANTIATE_TEST_CASE_P(RectangleTests, TestRectangle,
                        testing::Values(
                                // (a, b, expectedArea, expectedPerimeter)
                                std::make_tuple(0, 0, 0, 0),
                                std::make_tuple(0, 1, 0, 2),
                                std::make_tuple(1, 0, 0, 2),
                                std::make_tuple(5, 8, 40, 26),
                                std::make_tuple(8, 5, 40, 26)
                        )
);
