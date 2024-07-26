#include <stdio.h>
void sum(int,int);
void main()
{
    int a,b;
    
    printf("\nGoing to calcutlate the sum of two numbers: ");
    printf("\n enter two number");
    scanf("%d%d",&a,&b);
   sum(a,b);
   

    
}
void sum(int d,int e)
{
   int c;
   c=d+e;
    printf("result is:%d",c);
    
    
   
}