/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
 void convertVowels(char str[]);
int main()
{ char str[]="Apna College";
  
 convertVowels(str);
  
    printf("Modified string: %s", str);
    
    return 0;
}
void convertVowels(char str[]){
    
for(int i=0;str[i]!='\0';i++){


    if(str[i]== 'a')
      str[i]='A'; 
      else if(str[i]== 'e')
      str[i]='E'; 
      else if(str[i]== 'i')
      str[i]='I'; 
      else if(str[i]== 'o')
      str[i]='O';
      else if(str[i]== 'u')
      str[i]='U';
    
}
}
       
