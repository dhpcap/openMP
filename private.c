// First private without initialiging private value
#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main()
{
omp_set_num_threads(4);
int val=123456789;
printf("Value of\"val\"before the OpenMP parallel region: %d.\n",val);
#pragma omp parallel private(val)
{
    printf("Thread %d sees \"val\"=%d, and updated it to be %d.\n",omp_get_thread_num(), val, omp_get_thread_num());
    val=omp_get_thread_num();

}
printf("value of \"val\" after the OpenMp parallel region: %d,\n",val);
return 0;
}