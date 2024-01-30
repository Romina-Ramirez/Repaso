# Repaso

## Instalación de MPI

sudo apt-get update
sudo apt-get install libopenmpi-dev

## Compilación

mpicxx ejemplo.cpp -o ejemplo
leerArchivo
mpicxx leerArchivo.cpp -o leerArchivo

## Ejecutar

mpiexec -n procs ./ejemplo



## Include

#include <iostream>
#include <mpi.h>
#include <vector>
#include <math.h>

## Estructura básica

int main(int argc, char** argv) {

    MPI_Init(&argc, &argv);

    int rank, nprocs;

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);



    MPI_Finalize();

    return 0;

}

## Métodos std

std::string str = " ";
str = str + std::to_string(10);
std::printf("RANK_%d datos recibidos ==> %s \n", rank, str.c_str());