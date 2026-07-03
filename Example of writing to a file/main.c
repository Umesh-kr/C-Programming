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
   
   fptr=fopen("Text.txt","w");
   
   fprintf(fptr,"%c",'M');
   fprintf(fptr,"%c",'A');
    fprintf(fptr,"%c",'N');
     fprintf(fptr,"%c",'G');
      fprintf(fptr,"%c",'O');
      
      fclose(fptr);
      
      return 0;
}