#include<stdio.h>
#include<omp.h>
int main()
{
    
    #pragma omp parallel if(omp_in_parallel)
    {
        printf("the threads is %d\n",omp_get_thread_num());
    }
 return 0;   
}