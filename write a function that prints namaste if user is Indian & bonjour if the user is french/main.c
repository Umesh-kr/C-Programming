/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void printNamaste();
void printBonjour();

int main()
{
int i;
printf("Enter f for french & i for indian:");

char ch;
scanf("%c",&ch);

if(ch=='i'){
    printNamaste();
}else if(ch=='f'){
    printBonjour();
}
else{
    printf("invalid input");
}
return 0;
}

void printNamaste(){
    printf("Namaste\n");
}
void printBonjour(){
    printf("Bonjour\n");
}
