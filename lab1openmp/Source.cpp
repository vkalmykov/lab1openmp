#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(int argc, char **argv) {
#pragma omp parallel
	{
		printf("Hello world from process %d of %d\n", omp_get_thread_num(), omp_get_num_threads());
	}
	system("pause");
	return 0;
}