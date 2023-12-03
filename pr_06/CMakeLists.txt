# CMakeList.txt: проект CMake для pr_06; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)
set_target_properties(${TARGET} PROPERTIES
CXX_STANDARD 17
CXX_STANDARD_REQUIRED YES
CXX_EXTENSIONS NO
)
project ("pr_06")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (pr_06 "main.cpp" "Sort.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
