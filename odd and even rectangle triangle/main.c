
#include <stdio.h>

int main()
{
    int num,i,j,k=1,m=30;
    printf("how many even numbers do you want to print: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<i;j++)
        {
            
            printf("%d ",k);
            
            k=k+2;   
            
            
            
            
        }
        printf("\n");
    }
    for(i=1;i<=num;i++){
        for(j=num;j>=i;j--){
            printf("%d ",m);
            m=m-2;
        }
        printf("\n");
    }
    
   

    return 0;
}
