/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

void removespace(char str[]);

int main(){
    char str[50];
    
    printf("Enter string:");
    gets(str);
    removespace(str);
    
    printf("%s",str);
    return 0;
}
void removespace(char str[]){
    int i,j=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
}