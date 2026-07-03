/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void reverse(int arr[],int n);

void printarr(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5};
    
    reverse(arr,5);
    printarr(arr,5);
    
    return 0;
}
void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}