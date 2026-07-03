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
   
   fptr=fopen("Sum.txt","r");
   
   int a;
   fscanf(fptr,"%d",&a);
   int b;
   fscanf(fptr,"%d",&b);
   
   fclose(fptr);
   
   fptr=fopen("Sum.txt","w");
   
   fprintf(fptr,"%d\n",a+b);
   
   fclose(fptr);
   return 0;
}
