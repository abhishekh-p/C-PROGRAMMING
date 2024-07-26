
#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
        
    }else{
        return n+sum(n-1);
    }
}

int main()
{
    int number;
    printf("enter a nubmer");
    scanf("%d",&number);
    
    if(number<0){
        printf("number is negetive");
        
    }
    else{
        printf("sum of %d",sum(number));
    
        
    }
    
    

    return 0;
}
