/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    printf("enter 2 numbers");
    scanf("%d%d",&num1,&num2);
    if(num1<num2){
        printf("greatest number is %d",num2);
        
    }else{
        printf("greatest number is %d",num1);
    }
    
    
    

    return 0;
}
