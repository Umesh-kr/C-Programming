/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    ptr=(int*)calloc(5,sizeof(int));
    
    printf("Enter number(5):");
    for(int i=0;i<5;i++){
    scanf("%d",&ptr[i]);
    }
    
    ptr=realloc(ptr,8);
    
    printf("Enter number(8):");
    for(int i=0;i<8;i++){
        scanf("%d\n",&ptr[i]);
    }
    
    //printf
    for(int i=0;i<8;i++){
        printf("Number is %dis%d",i,ptr[i]);
        
    }
    return 0;
    }
    
   
