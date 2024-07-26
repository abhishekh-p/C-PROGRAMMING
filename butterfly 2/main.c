#include <stdio.h>
int main()
{
    int i,j,k,num;
    printf("Enter the number of rows :");
    scanf("%d",&num);
    printf("\n");
     
    for( i = 1; i <= num;i++)
    {
      for( j = 0;j < i;j++)
      {
        printf("*");
      }
      for( j=0;j<2*(num-i);j++)
      {
        printf(" ");
      }
      for(int j =0;j<i;j++)
      {
        printf("*");
      }
      printf("\n");
      
    
   
      
    }
    for(i=1;i<=num;i++)
    {
        for(j=num;j>i;j--)
        {
            printf("*");
        }
        for(j=0;j<2*i;j++)
        {
            printf(" 
            ");
        }
        for(k=num;k>i;k--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
    
}