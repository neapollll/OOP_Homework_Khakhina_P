# CMakeList.txt: проект CMake для pr_04_Task1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("pr_04_Task1")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (pr_04_Task1 "Vector.cpp" "Vector.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
