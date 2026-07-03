/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n;
   
   printf("Enter number:");
   scanf("%d",&n);
   
  for(int i=2;i<n;i++){
      if(n%i==0){
          printf("prime no");
          return 0;
      }
  }
  printf("not prime no");
  
  return 0;
}
