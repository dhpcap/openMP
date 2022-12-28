#include<stdio.h>
#include<time.h>
#include<unistd.h>
int main()
{
  long a=100000,b=300000,c=0;
  c=a+b+c;
  sleep(30);
printf("sum=%d",c);
}
