/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include<string.h>

void slice(char str[],int n,int m);
int main(){
    char str[]="helloworld";
    slice(str,3,6);
}
void slice(char str[],int n,int m){ // n and m are valid values
    char newstr[100];
    int j=0;
    
    for(int i=n;i<=m;i++,j++){
        newstr[j]=str[i];
    }
    newstr[j]='\0';
    puts(newstr);
}