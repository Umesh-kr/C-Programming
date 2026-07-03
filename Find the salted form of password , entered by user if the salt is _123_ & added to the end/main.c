/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>

void salting(char password[]);

int main(){
    char password[100];
    scanf("%s",password);
    salting(password);
    return 0;
}
void salting(char password[]){
    char salt[]="123";
    char newPass[200];
    
    strcpy(newPass,password); // newPass="test";
    strcat(newPass,salt); // newPass="test"+"123";
    
    puts(newPass);
}