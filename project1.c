#include<stdio.h>  
 int main()    
{    
int a=1, b=2; //declaring the variable     
printf("Before swapping a=%d b=%d",a,b); //to print the before swapping numbers     
a=a+b;//a=3 (1+2)    
b=a-b;//b=1 (3-2)    
a=a-b;//a=2 (3-1)  //this will swapp the numbers  
printf("\nAfter swapping a=%d b=%d",a,b); //to print the after swapping numbers   
return 0;  
}   
