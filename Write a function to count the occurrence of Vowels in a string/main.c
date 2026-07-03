/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>

int countVowels(char str[]);

int main(){
    char str[]="HelloWorld";
    printf("Vowels are : %d", countVowels(str));
    
}
int countVowels(char str[]){
    int count =0;
    
    for(int i=0;str[i]!='\0';i++){
        if(str[i]== 'a' || str[i]== 'e' || str[i]== 'i' || str[i]== 'o' || str[i]== 'u'){
            count++;
        }
    }
    return count;
}