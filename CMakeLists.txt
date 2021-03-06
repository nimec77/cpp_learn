cmake_minimum_required(VERSION 3.20)
project(cpp_learn)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
FetchContent_MakeAvailable(googletest)

include_directories(src)

set(SRC_LIST
        src/dp/knapsack_problem.cpp
        src/search/binary/binary_search.cpp
        src/sort/selection/selection_sort.cpp
        src/sort/insertion/insertion_sort.cpp
        src/sort/merge/merge_sort.cpp
        src/sort/quicksort/quicksort.cpp
        src/sort/counting/counting_sort.cpp
        src/big_numbers/big_numbers.cpp
        )

add_executable(${PROJECT_NAME} ${SRC_LIST})

enable_testing()

set(SRC_TESTS
        test/helpers/sort_test_helper.cpp
        test/dp/knapsack_problem_test.cpp
        test/search/binary/binary_search_test.cpp
        test/sort/selection/selection_sort_test.cpp
        test/sort/insertion/insertion_sort_test.cpp
        test/sort/merge/merge_sort_test.cpp
        test/sort/quicksort/quicksort_test.cpp
        test/sort/counting/counting_sort_test.cpp
        test/big_numbers/big_numbers_test.cpp
        test/main.cpp
        )
add_executable(
        google_test
        ${SRC_LIST}
        ${SRC_TESTS}
)

target_link_libraries(google_test gtest_main)

include(GoogleTest)
gtest_discover_tests(google_test)

