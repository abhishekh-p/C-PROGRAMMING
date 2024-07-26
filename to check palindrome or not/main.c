
#include <stdio.h>

int main()
{
    int num,c=0,reverse=0,orginal;
    printf("enter a number :");
    scanf("%d",&num);
    
    orginal=num;
    
    while(num!=0){
        c=num%10;
        reverse=reverse*10+c;
        num=num/10;
        
    }
    if(orginal==reverse){
        printf("number is palindrome : %d",reverse);
        
    }
    else{
        printf("number not palindrom");
        
    }
    

    return 0;
}
