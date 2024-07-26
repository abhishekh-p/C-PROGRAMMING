/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i,j,k;
    printf("enter a number");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        for(k=0;k<num-i;k++)
        
        {
            printf(" ");
            
        }
        for(j=num;j>k;j--){
            printf("*");
        }
        printf("\n");
        
    }

    return 0;
}
