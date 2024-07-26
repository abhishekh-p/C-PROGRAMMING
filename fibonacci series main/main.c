
#include <stdio.h>

int main()
{
    int i,num,a=0,b=1,c=0;
    
    printf("enter a number: ");
    scanf("%d",&num);
    printf("fibonacci series:%d %d ",a,b);
    for(i=0;i<num;i++){
        
        c=a+b;
        a=b;
        b=c;
        
        if(num>=c){
        
        printf("%d ",c);
        
        }
    }

    return 0;
}
