
#include <stdio.h>
int rev(int);
void main()
{
    int num,temp;
    printf("enter a number");
    scanf("%d",&num);
   temp=rev(num);
   printf("%d",temp);
    
    
}
int rev(int a)
{
    int c,reverse=0;
    while(a!=0)
    {
        c=a%10;
        reverse=reverse*10+c;
        a=a/10;
    }
    return reverse;
}