/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>

 struct student{
    int rollno;
    char name[20];
    float cgpa;
};
 int main(){
     struct student s1;
     s1.rollno=1664;
     strcpy(s1.name,"Umesh");
     s1.cgpa=9.2;
     
     printf("student name=%s\n",s1.name);
     printf("student roll no=%d\n",s1.rollno);
     printf("student cgpa=%f\n",s1.cgpa);
     
     return 0;
 }