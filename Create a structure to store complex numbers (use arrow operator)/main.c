/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct complex{
    int real;
    int img;
    
};

int main()
{
    struct complex number1={5,8};
    struct complex *ptr=&number1;
    
     printf("real part=%d\n",ptr->real);
     printf("img part=%d\n",ptr->img);
    return 0;
}
