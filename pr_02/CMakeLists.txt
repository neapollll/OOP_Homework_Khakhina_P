# CMakeList.txt: проект CMake для pr_02; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project ("pr_02")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (pr_02 "main.cpp" "Train.h" "Reader.cpp" "Console.cpp" "Train.cpp" "Reader.h" "Console.h"  "Wagon.cpp" "Wagon.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
