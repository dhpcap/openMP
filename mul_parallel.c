#include<stdio.h>
#include<omp.h>
int main()
{
    printf("First parallel Region\n");
    #pragma omp parallel if(omp_in_parallel) num_threads(10)
    {
        
        printf("threads is %d\n",omp_get_thread_num());
    }
    printf("Second parallel Region\n");
   #pragma omp parallel if(omp_in_parallel) num_threads(5)
   {
     printf("threads is %d\n",omp_get_thread_num());
   } 
   return 0;
}