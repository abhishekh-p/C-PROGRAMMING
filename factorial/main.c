
#include <stdio.h>
int factorial(int n){
    
    if (n==0){
        return 1;
        
    }else{
        return n*factorial(n-1);
    }
}

int main()
{
    int number;
    printf("enter a positive integer");
    scanf("%d",&number);
    
    if(number<0){
        printf("factorial is not difined for negetive number.\n");
        
    }else{
        printf("facotial of %d is %d\n",number,factorial(number));
    }

    return 0;
}
