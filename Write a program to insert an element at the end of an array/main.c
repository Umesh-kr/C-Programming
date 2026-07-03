/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main(){
    int a[100],n,items;
    
    printf("Enter size:");
    scanf("%d",&n);
    
    printf("Enter array elements:");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}

printf("Enter element to insert:");
scanf("%d",&items);

a[n]=items;
n++;

printf("Enter element after insertion:\n");
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}
return 0;
}



