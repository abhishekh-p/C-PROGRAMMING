
#include <stdio.h>
void calculator(float,float,float);
float main()
{
    float a,b,choice,num=1;
    
    while(num<=100){
        printf("\n1.additon \n2.division \n3.subtraction \n4.multiplicalion");
        scanf("\n%f",&choice);
        
        
        printf("enter two number");
        scanf("%f%f",&a,&b);
        calculator(a,b,choice);
        num++;
        
    }
    
    
    

    
}
void calculator(float a,float b,float choice){
    if(choice>4){
        printf("invalid");
    }
    
    else if(choice==1){
        printf("sum :%f",a+b);
    }
    else if(choice==2){
        printf("sum :%f",a-b);
        
    }
    else if(choice==3){
       printf("sum :%f",a/b);
        
    }
    else if(choice==4){
        printf("sum :%f",a*b);
        
    }
    else{
        printf("invalid");
    }
} 