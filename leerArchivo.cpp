#include <iostream>
#include <mpi.h>
#include <vector>
#include <math.h>

int main(int argc, char** argv) {

    MPI_Init(&argc, &argv);

    int rank, nprocs;
    MPI_File fh;

    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &nprocs);

    MPI_File_open(MPI_COMM_WORLD, "conteo.txt", MPI_MODE_RDONLY, MPI_INFO_NULL, &fh);

    for (int i = 0; i < 10; i++) {
        std::printf("%d, ", fh[i]);
    }

    MPI_Finalize();

    return 0;

}