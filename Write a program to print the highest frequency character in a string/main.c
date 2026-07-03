/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <string.h>

void highestfreq(char str[]);

int main(){
    char str[]="hello";
    
    
    highestfreq(str);
    return 0;
}
void highestfreq(char str[]){
    int freq[256]={0};
    int max=0;
    char ch;
    
    for(int i=0;str[i]!='\0';i++){
        freq[str[i]]++;
    }
    for(int i=0;str[i]!='\0';i++){
        if(freq[str[i]]>max){
            max=freq[str[i]];
            ch = str[i];
        }
    }
    printf("highest frequency character :%c\n",ch);
    printf("frequency=%d",max);
}