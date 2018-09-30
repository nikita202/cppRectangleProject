project(${CMAKE_PROJECT_NAME}_lib)

set(HEADER_FILES
        rectangle.h)
set(SOURCE_FILES
        rectangle.cpp)

add_library(${CMAKE_PROJECT_NAME}_lib STATIC
        ${SOURCE_FILES}
        ${HEADER_FILES}
        )
