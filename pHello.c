#include <stdio.h>
#include <omp.h>
void main(){
	omp_set_num_threads(8);
	#pragma omp parallel
	{
		printf("Thread:%d\n",omp_get_thread_num());
	}

}
