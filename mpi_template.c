#include <stdio.h>
#include "mpi.h"

main(int argc, char** argv)
{
	int my_rank;
	int p;
	int exit;

	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);
	MPI_Comm_size(MPI_COMM_WORLD, &p);

	do
	{
		if (my_rank == 0)
		{
			//eisagwgh dedomenwn ktl.
		}
		
		//kirio programma
		
		if (my_rank == 0) {
			printf("0. Synexeia - 1. Eksodos\n");
			scanf("%d", &exit);
			printf("\n");
		}
		MPI_Bcast(&exit, 1, MPI_INT, 0, MPI_COMM_WORLD);
	}while (!exit);
	
	MPI_Finalize();
}


