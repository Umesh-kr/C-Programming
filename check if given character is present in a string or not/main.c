/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int presentstring(char str[]);

int main()
{
    char str[]="HelloWorld";
   
    presentstring(str);
    
    return 0;
}
int presentstring(char str[]){
    char ch;
      for(int i=0;str[i]!='\0';i++){
        if( str[i] == 'l'){
            printf("YES\n");
            return 1;
        }
        
      }
      printf("NO\n");
      return 0;
        
    
}
