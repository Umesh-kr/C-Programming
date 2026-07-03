/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

typedef struct BankAccount{
    int accountNo;
    char name[100];
}acc;

int main(){
    acc account1={123,"Umesh"};
    acc account2={125,"rohit"};
    acc account3={126,"rahul"};
    
    printf("Account no=%d\n",account1.accountNo);
    printf("Account holder=%s\n",account1.name);
    
    printf("\n");
    
    
    printf("Account no=%d\n",account2.accountNo);
    printf("Account holder=%s\n",account2.name);
    
    printf("\n");
    
    printf("Account no=%d\n",account3.accountNo);
    printf("Account holder=%s\n",account3.name);
    
    return 0;
}