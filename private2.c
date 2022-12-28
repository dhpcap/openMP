// First private with initialiging private value
#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main()
{
    int val;
omp_set_num_threads(4);
printf("enter a number\n");
scanf("%d",&val);
//int val=123456789;
printf("Value of\"val\"before the OpenMP parallel region: %d.\n",val);
#pragma omp parallel firstprivate(val)
{

    int val=5555;
    printf("Thread %d sees \"val\"=%d, and updated it to be %d.\n",omp_get_thread_num(), val, omp_get_thread_num());
    val=omp_get_thread_num();

}
printf("value of \"val\" after the OpenMp parallel region: %d,\n",val);
return 0;
}