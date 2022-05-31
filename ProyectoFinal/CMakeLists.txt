# CMakeList.txt : CMake project for ProyectoFinal, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (ProyectoFinal "main.cpp" "ProyectoFinal.h"  "Entidades.h" "Elector.h" "Votos.h" "Administrador.h" "Menus/menuAdmin.h" "Menus/menuElector.h" "Menus/menuReportes.h" "Menus/menuPrincipal.h" "ache.cpp" "login.cpp" "Candidato.h")

# TODO: Add tests and install targets if needed.
