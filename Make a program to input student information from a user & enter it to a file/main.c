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
    
    fptr=fopen("Student.txt","w");
    
      char name[100];
      int age;
      float cgpa;
      
      printf("Enter name:");
      scanf("%s",name);
      
      printf("Enter age:");
      scanf("%d",&age);
      
      printf("Enter cgpa:");
      scanf("%f",&cgpa);
      
      fprintf(fptr,"student name:%s\t",name);
      fprintf(fptr,"student age:%d\t",age);
      fprintf(fptr,"student cgpa:%f\t",cgpa);
      
      fclose(fptr);
      return 0;
}
