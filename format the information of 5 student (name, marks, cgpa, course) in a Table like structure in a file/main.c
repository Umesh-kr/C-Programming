/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    FILE*fptr;
    
    fptr=fopen("student.txt","w");
    
    if(fptr==NULL){
        printf("file not found!");
        return 1;
    }
    fprintf(fptr,"subject\t   marks\t  cgpa\t  course\n");
    fprintf(fptr,"math\t    85\t  8.9\t  B.tech\n");
    fprintf(fptr,"physics\t    90\t  9.5\t  B.tech\n");
    fprintf(fptr,"chemistry\t88\t  9.2\t  B.tech\n");
    fprintf(fptr,"english\t    80\t  8.4\t  B.tech\n");
    fprintf(fptr,"c\t        95\t  10.0\t  B.tech\n");
    fclose(fptr);
    printf("Data stored succefully.");
    return 0;
    
}