/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int fact(int n);
int main()

{
    
    printf("fact is :%d",fact(5));
    return 0;
}
int fact(int n){
    if(n==1){
        return 1;
    }
    
    int factNm=fact(n-1);
    int factN=factNm*n;
    
    return factN;
}
