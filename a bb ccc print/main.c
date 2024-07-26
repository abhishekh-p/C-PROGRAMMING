
#include <stdio.h>

int main()
{
    int i,num,j;
    char letter='A',k=0;
    
 
    
    printf("how many alfebets do you want to print");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++){
        
        for(j=0;j<=i;j++){
            
           
             printf("%c ",letter);
              
            
        }
        
        printf("\n");
        letter++;
    }

    return 0;
}
