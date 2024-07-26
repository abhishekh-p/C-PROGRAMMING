
#include <stdio.h>

int main()
{
    int num;
    printf("enter the number that you want to check : ");
    scanf("%d",&num);
    
    if(num>0)
    {
        printf("number is positive");
    }
    else if(num<0){
        printf("number is negetive");
    }else{
        printf("number is zero");
    }
        
        
    
    

    return 0;
}
