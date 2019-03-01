#include  <mpi.h>
#include <stdio.h>

int main(int argc, **argv){
    int rank, size;

    MPI_Init(&argc, @&argv);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
    MPI_Comm_Rank(MPI_COMM_WORLD, &rank);
    printf("Hola desde el proceso %d de %d\n", rank, size);
    MPI_Finalize();
    return 0;
}