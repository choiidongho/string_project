cmake_minimum_required(VERSION 3.10)
project(StringHelperProject)

set(CMAKE_CXX_STANDARD 17)

# Google Test 설정
enable_testing()
find_package(GTest REQUIRED)

include_directories(${GTEST_INCLUDE_DIRS})
include_directories(${CMAKE_SOURCE_DIR})

# 실행 예제용 main 타겟
add_executable(main_exec
    main.cc
    StringHelper.cc
)

# 테스트용 타겟
add_executable(tests
    StringHelper_test.cc
    StringHelper.cc
)

target_link_libraries(tests
    ${GTEST_LIBRARIES}
    pthread
)

add_test(NAME StringHelperTest COMMAND tests)

