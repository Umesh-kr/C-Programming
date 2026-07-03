/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int arr[100],n,x,count=0;
   
   printf("Enter size:");
   scanf("%d\t",&n);
   
   for(int i=0;i<n;i++){
       scanf("%d\t",&arr[i]);
   }
   printf("Enter number x:");
   scanf("%d",&x);
   
   for(int i=0;i<n;i++){
       if(arr[i]==x){
           count++;
       }
   }
   printf("%d %d occurstimes",x,count);
   return 0;
}
