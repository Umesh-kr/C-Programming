/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

struct student{
    int id;
    char name[50];
    float marks[5];
    float cgpa;
};

int main(){
    struct student s;
    float total = 0;
   
   // input
    printf("Enter Student ID: ");
    scanf("%d", &s.id);

    printf("Enter Student Name: ");
    scanf("%s", s.name);

    printf("Enter marks of 5 subjects:\t");
  int i;
    for( i = 0; i < 5; i++){
        printf("Subject %d: ", i + 1);
        scanf("%f", &s.marks[i]);
        total = total + s.marks[i];
    }

    float percentage = total / 5;

    s.cgpa = percentage / 9.5;
    
    //output
    printf("\n----- Student Details -----\n");
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Percentage: %.2f\n", percentage);
    printf("CGPA: %.2f\n", s.cgpa);

    return 0;
}