#include <stdio.h>
void rev();
void main()
{
   
    rev();
    
   
   
    
    
}
void rev()
{
    int c,reverse=0,num;
    printf("enter a number");
    scanf("%d",&num);
    while(num!=0)
    {
        c=num%10;
        reverse=reverse*10+c;
        num=num/10;
    }
    printf("%d",reverse);
   
}