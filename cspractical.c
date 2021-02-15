#include<stdio.h>
int main()
{
    int a,b;
    printf("enter two numbers\n");
    scanf("%d%d",&a,&b);
    a+=b;
    b=a-b;
    a-=b;
    printf("the two numbers after swapping are %d & %d",a,b);
    
    return 0;
}