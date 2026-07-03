/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <string.h>
int main(){
   char str[100];
   char ch;
   int i=0;
   
   while(ch!='\n'){
       scanf("%c",&ch);
       str[i]=ch;
       i++;
   }
   str[i]='\0';
    puts(str);
       
   }
