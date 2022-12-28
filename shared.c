// First private with initialiging private value
#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main()
{
omp_set_num_threads(2);

int val=0;
printf("Value of\"val\"before the OpenMP parallel region: %d.\n",val);
#pragma omp parallel shared(val)
{
  if(omp_get_thread_num()==0)
    {
    printf("Thread 0 sees the value of \"val\" to 123.\n ");    
    val=123;
    }
    #pragma omp barrier
    if(omp_get_thread_num()==1)
    {
    printf("Thread 1 sees the value of \"val\":%d.\n",val);
    
    }
}
printf("value of \"val\" after the OpenMp parallel region: %d,\n",val);
return 0;
}