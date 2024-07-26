
#include <stdio.h>

int main()
{
    int num,i,j,k;
    printf("enter a number");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        for(k=0;k<num-i;k++)
        
        {
            printf(" ");
            
        }
        for(j=num;j>k;j--){
            printf("* ");
        }
        printf("\n");
    }
    for(i=0;i<=num;i++)
    {
        for(k=0;k<num-i;k++)
        
        {
            printf(" ");
            
        }
        for(j=num;j>k;j--){
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=1;i<num;i++)
    {
        
        
        for(j=0;j<2;j++){
            printf(" ");
            
        }
        for(k=0;k<3;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
