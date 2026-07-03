/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void printsum(int n);

int main()
{
    int n;
    printf("Enter number :");
    scanf("%d",&n);
    
    printsum(n);
    return 0;
}
void printsum(int n){
    int sum;
    sum=n*(n+1)/2; // another method to find sum of n term is ,sum=sum(n-1)+n
    printf("sum is :%d\n",sum);
}
   