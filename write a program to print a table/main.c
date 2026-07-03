/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main(){
    int n,i;
    printf("Enter number:");
    scanf("%d",&n);
    
    
    for(int j=1;j<=10;j++){
        printf("%d*%d=%d\n",n,j,n*j);
    }
    return 0;
}