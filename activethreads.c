#include<sdtio.h>
#include<omp.h>
int main()
{
    omp_set_num_threads();
    #pragma omp parallel
    {
        int ID=omp_get_threads_num()
        printf("active threads\n",ID);
        int thr=omp_get_num_threads();
        printf("total threads\n",thr);
    }
    return 0;
}