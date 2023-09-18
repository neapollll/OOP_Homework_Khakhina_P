# CMakeList.txt: проект CMake для pr_03; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("pr_03")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (pr_03 "main.cpp" "IComplex.h" "IComplex.cpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
