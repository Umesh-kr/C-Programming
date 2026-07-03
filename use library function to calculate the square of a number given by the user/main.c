/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>

int main(){
    
    int n,square;
    
    printf("Enter number:");
    scanf("%d",&n);
    
    square=pow(n,2);
    
    printf("square is =%d\n",square);
    
    return 0;
    
}