
#include <stdio.h>

int main()
{
    int n,x,sum,rem;
    
    printf("enter a number: ");
    scanf("%d",&n);
    
    x=n;
    while(x>=10)
    {
        sum=0;
        while(x>0)
        {
            rem=x%10;
            sum+=rem*rem;
            x/=10;
        }
        x=sum;
    }
    
    if(sum==1)
    {
        printf("%d is a Happy Number\n",n);
        
    }else
    {
        printf("%d is not happy number\n",n);
    }
    

    return 0;
}
