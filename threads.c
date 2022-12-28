#include<stdio.h>
#include<omp.h>
int main()
{
  int a,count,i;
  omp_set_num_threads(10);
 # pragma omp parallel
{
  int ID=omp_get_thread_num();
  printf("Hello, World(%d)\n",ID);
}
  printf("total thread=%d\n",omp_get_max_threads());
omp_set_num_threads(15);
#pragma omp parallel
{
 int ID2=omp_get_thread_num();
 printf("total default threads=%d\n",ID2);

}

return 0; 
}
