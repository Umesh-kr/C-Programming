/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
    int a[100],n,largest;
    
    printf("Enter size:");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    largest = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
    
    printf("largest number:%d",largest);
    return 0;
}
