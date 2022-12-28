#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
int main()
{
    int num,sum=0;
    printf("Enter a number for till you wants to add\n");
    scanf("%d",&num);
    
    omp_set_num_threads(1);
    
    
    #pragma omp parallel private(sum)
    {  
    for(int i=1;i<=num;i++)
    {
     sum=sum+i;   
    }  
    #pragma omp barrier
    
       printf("sum of given natural number=%d\n",sum);
    }
    return 0;
}
