# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
# add_executable (CMakeProject1 "CMakeProject1.c" "CMakeProject1.h")
add_executable (task1 task1.c)
add_executable (task2 task2.c)
add_executable (task3 task3.c)
add_executable (task4 task4.c)
add_executable (task5 task5_main.c task5_func.c )
#add_executable (task6 task6_main.c task6_func.c )
add_executable (task7 task7_main.c task7_func.c )
add_executable(task8 task7_main.c)

add_library(task8_lib STATIC task7_func.c)

target_link_libraries(task8 task8_lib)
# TODO: Добавьте тесты и целевые объекты, если это необходимо.
