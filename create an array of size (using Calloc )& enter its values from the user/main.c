/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    
    ptr=(int*) calloc(5, sizeof(int));
    
    printf("Enter number(5):");
    
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    //print
    
    for(int i=0;i<5;i++){
        printf("number is %d =%d\n",i,ptr[i]);
    }
    return 0;
    }
