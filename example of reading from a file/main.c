/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE*fptr;
    fptr=fopen("Test.txt","r");
    
    char ch;
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    
    fscanf(fptr,"%c",&ch);
    printf("character: %c\n",ch);
    
    fclose(fptr);
    return 0;
}
