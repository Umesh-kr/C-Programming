/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
	FILE*fptr;
	fptr=fopen("string.txt","r");

	char str[100];
	if(fptr==NULL) {
		printf("file not found!");
	}
	fgets(str,100,fptr);

	printf("string=%s",str);

	fclose(fptr);
	return 0;
}
