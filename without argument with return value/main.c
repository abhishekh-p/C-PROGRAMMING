#include <stdio.h>
int sum();
void main()
{
    int c;
    
    printf("\nGoing to calcutlate the sum of two numbers: ");
    c=sum();
    printf("sum is %d",c);
    

    
}
int sum()
{
    int a,b;
    printf("\nenter two numbers");
    scanf("%d%d",&a,&b);
    return a+b;
}