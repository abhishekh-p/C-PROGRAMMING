/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("enter 3 number: ");
    
        scanf("%d%d%d",&num1,&num2,&num3);
        if(num1>num2 && num1>num3){
            printf("\ngreatest number is: %d",num1);
            
        }else if(num2>num1 && num2>num3){
            printf("\n greatest number is: %d",num2);
            
        }else if(num3>num1 && num3>num2){
             printf("\n greatest number is: %d",num3);
           
        }
        
        
        
    
    

    return 0;
}
