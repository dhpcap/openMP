#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main()
{
    int num,fact=1,i,val;
    printf("Enter a number for finding fatorial\n");
    scanf("%d",&num);
    
    omp_set_num_threads(1);
    if(n<=0)
    {
        printf("Factorial=1\n");
    }   
    else
    {
    #pragma omp parallel firstprivate(fact)
    {  
    for(i=1;i<=num;i++)
    {
     fact=fact*i;     
    } 
    #pragma omp barrier
     printf("Factorail of %d =%d\n",num,fact);
    }
    } 
     return 0;
    }