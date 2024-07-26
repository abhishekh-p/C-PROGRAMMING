
#include <stdio.h>

int main()
{
    int j,i,num,k;
    printf("How Many Rows do you want print: ");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        
        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for(i=1;i<num;i++)
    {
        
        for(j=num;j>i;j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    for(i=0;i<num;i++)
    {
        
        for(j=num;j>i;j--)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(i=0;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
            
        }
        for(k=num;k>i;k--)
        {
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}
