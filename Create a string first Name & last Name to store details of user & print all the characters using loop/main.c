/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void printstring(char arr[]);

int main(){
    char firstName[]="shradha";
    char lastName[]="khapra";
    
    printstring(firstName);
    printstring(lastName);
    
    return 0;
}
void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}