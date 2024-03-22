cmake_minimum_required(VERSION 3.29.0)

set(test_solution "lc4_test")

# BUILD_TESTING variable is created by include(CTest)
# It is set to ON by default
if (BUILD_TESTING)
    set(SOURCES
        "../src/solution.h"
        "../src/solution.cpp"
        "lc4_test.cpp")

    add_executable(${test_solution} ${SOURCES})

    target_link_libraries(${test_solution} PRIVATE GTest::gtest_main)

    include(GoogleTest)
    # Finds all the Google tests associated with the executable
    gtest_discover_tests(${test_solution})

    target_include_directories(${test_solution} PUBLIC test src)
endif()
