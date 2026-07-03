/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main(){
    int num,a,b,c,sum;
    
    printf("Enter a 3 digit number:");
    scanf("%d",&num);
    
    a=num/100; //first digit
    b=(num/10)%10; //second digit
    c=num%10;
    
    sum=(a*a*a)+(b*b*b)+(c*c*c);
    
    printf("sum =%d\n",sum);
    if(sum==num){
        printf("Armstronf number");
    }else{
        printf("Not Armstrong number");
    }
    return 0;
}