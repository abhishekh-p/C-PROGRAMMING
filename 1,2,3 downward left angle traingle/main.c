
#include <stdio.h>

int main()
{
    int num,j,i,k=0;
    printf("enter a number: ");
    scanf("%d",&num);
    
    for(i=1;i<num;i++)
    {
        k=i;
       for(j=1;j<=i;j++)
       {
           printf("%d ",k);
           k++;
       }
       printf("\n");
       
    }

    return 0;
}
