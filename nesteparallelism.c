#include<stdio.h>
#include<omp.h>
void report_num_threads(int level) // function
{
    #pragma omp single //for print only one thread.
    {
        printf("Level %d: number of threads in the team-%d\n",level, omp_get_num_threads());

    }
}

int main()
{
    omp_set_dynamic(0); // for open the nested function(0-open,1-close).
    #pragma omp parallel num_threads(2)//outer parallel.
    {
        report_num_threads(1); // function call
        #pragma omp parallel num_threads(2)//nested parallel.
        {
            report_num_threads(2); // function call
            #pragma omp parallel num_threads(2) //nested parallel.
            {
                report_num_threads(3); //function call
            }
        }
    }
    return 0;
}