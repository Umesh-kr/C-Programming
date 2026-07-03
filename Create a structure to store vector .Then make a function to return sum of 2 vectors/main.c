/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct vector{
    int x;
    int y;

};
 
 void calcSum(struct vector v1,struct vector v2,struct vector sum);
 
int main(){
    struct vector v1={5,10};
    
    struct vector v2={3,7};
    
    struct vector sum={0};
    
    calcSum(v1,v2,sum);
    return 0;
}
void calcSum(struct vector v1,struct vector v2,struct vector sum){
    
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    
    printf("sum of x is :%d\n",sum.x);
    printf("sum of y is :%d\n",sum.y);
}