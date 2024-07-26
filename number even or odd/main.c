
#include <stdio.h>

int main()
{
    int num;
    printf("enter the number that you want to check even or odd: ");
    scanf("%d",&num);
    if(num%2==0){
        printf("number is even");
    }else{
        printf("number is odd");
    }

    return 0;
}
