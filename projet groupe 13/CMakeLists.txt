cmake_minimum_required(VERSION 3.26)
project(projet_semestre_3 C)

set(CMAKE_C_STANDARD 11)

add_executable(projet_semestre_3 main.c
        loc.h
        loc.c
        map.c
        moves.h
        moves.c
        queue.c
        queue.h
        stack.h
        stack.c
        node.c
        node.h
        tree.h
        tree.c
        ../../../../../../map.h
)
