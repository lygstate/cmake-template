cmake_minimum_required(VERSION 3.17)

project(hello VERSION 0.1.0.0 LANGUAGES C CXX)

add_executable(${PROJECT_NAME} hello.c)

find_package(Qt5 COMPONENTS Core REQUIRED)
add_executable(hello-qt
  hello-qt.cpp
)
target_link_libraries(hello-qt Qt5::Core)

if(BUILD_TESTING)
  include(CTest)
  enable_testing()
  add_subdirectory(tests)
endif()
