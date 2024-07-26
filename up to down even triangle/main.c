#include <stdio.h>

int main()
{
    int num,i,j,k=30;
    printf("enter a number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=num;j>=i;j--){
            printf("%d ",k);
            k=k-2;
        }
        printf("\n");
    }
    

    return 0;
}
