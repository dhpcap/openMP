#include<stdio.h>
#include<omp.h>
int main()
{
    int num,fact=1,i,val,sum=0;
    printf("Enter a number for finding fatorial\n");
    scanf("%d",&num);
    val=omp_set_num_threads();
    printf("First parallel Region\n");
    #pragma omp parallel firstprivate(fact)if(omp_in_parallel) num_threads(4)
    {
        
    for(i=1;i<=num;i++)
    {
     fact=fact*i;     
    } 
    #pragma omp barrier
    val=num_threads();
    if(val==0)
    {
    
     printf("Factorail of %d =%d\n",num,fact);
    }
    }
    printf("Second parallel Region\n");
   #pragma omp parallel firstprivate(sum)if(omp_in_parallel) num_threads(5)
   {
    for(i=1;i<=num;i++)
    {
     sum=sum+i;    
    } 
    #pragma omp barrier
    val=num_threads();
    if(val==0)
    {   
     printf("sum =%d\n",sum);
    }
   }
    
   return 0;
}