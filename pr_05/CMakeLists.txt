# CMakeList.txt: проект CMake для pr_05; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("pr_05")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (pr_05 "main.cpp"  "weak_ptr.h" "My_shared_ptr.h" "ptr.h" "my_unique_ptr.h")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
