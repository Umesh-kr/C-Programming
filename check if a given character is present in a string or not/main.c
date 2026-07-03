/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <string.h>

void checkchar(char str[],char ch);
int main(){
    char str[]="ApnaCollege";
    char ch= 'l';
    checkchar(str,ch);
}
void checkchar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        printf("character is present:");
        return;
    }
  
  printf("character is not present :");
}