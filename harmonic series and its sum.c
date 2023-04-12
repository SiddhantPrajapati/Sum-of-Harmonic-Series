//Write a program to find 1+1/2+1/3+1/4+....+1/n.
#include<stdio.h>
int main()
{
    int i,n;
    float sum=1,sum1;
    printf("please enter the number= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d+",1/i);
        sum1=sum+1/i;
        sum=sum1;
    }
    sum1=1/sum;
    printf("\n sum=%d",sum1);
    return 0;
}
