
#include <stdio.h>

int main()
{
    int num,i,j=0;
    printf("enter a number");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++){
        printf("* ");
    }
    for(i=0;i<num;i++){
        printf("* ");
        
        for(i=0;i<num;i++){
            printf("8 ");
            
        }
        for(j=0;j<i;j++){
            printf("9");
            printf("\n");
        }
       
    }
    
     
    for(i=0;i<=num;i++){
        printf("* ");
    }    

    return 0;
}
