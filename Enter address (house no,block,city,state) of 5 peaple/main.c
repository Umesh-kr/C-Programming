/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>


typedef struct address{
    int houseNo;
    int block;
    char city[100];
    char state[100];
} add;
 
 void printAdd(struct address add);
int main(){
    struct address adds[5];
      //input 
      printf("Enter information for person 1:");
      scanf("%d",&adds[0].houseNo);
      scanf("%d",&adds[0].block);
      scanf("%s",adds[0].city);
      scanf("%s",adds[0].state);
      
      
      printf("Enter information for person 2:");
      scanf("%d",&adds[1].houseNo);
      scanf("%d",&adds[1].block);
      scanf("%s",adds[1].city);
      scanf("%s",adds[1].state);
      
      
      printf("Enter information for person 3:");
      scanf("%d",&adds[2].houseNo);
      scanf("%d",&adds[2].block);
      scanf("%s",adds[2].city);
      scanf("%s",adds[2].state);
      
      
      printf("Enter information for person 4:");
      scanf("%d",&adds[3].houseNo);
      scanf("%d",&adds[3].block);
      scanf("%s",adds[3].city);
      scanf("%s",adds[3].state);
      
      
      printf("Enter information for person 5:");
      scanf("%d",&adds[4].houseNo);
      scanf("%d",&adds[4].block);
      scanf("%s",adds[4].city);
      scanf("%s",adds[4].state);
      
      
      printAdd(adds[0]);
      printAdd(adds[1]);
      printAdd(adds[2]);
      printAdd(adds[3]); 
      printAdd(adds[4]);
      
      
     return 0;
      
}
void printAdd(struct address add){
    printf("address is :%d %d %s %s",add.houseNo,add.block,add.city,add.state);
}