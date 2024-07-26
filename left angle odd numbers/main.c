/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i,j,k=30;
    printf("how many even numbers do you want to print: ");
    scanf("%d",&num);
    for(i=0;i<num;i++){
        for(j=0;j<i;j++)
        {
            
            printf("%d ",k);
            
            k=k-2;   
            
            
            
            
        }
        printf("\n");
    }

    return 0;
}
