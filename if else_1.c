#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=64;
	int in;
	
	do{
		printf("Guess a number:");
		scanf("%d",&in);
		
		if (in<answer)
			printf("low!\n");
			
		else if (in>answer)
			printf("high!\n");
			
	} while(in!=answer);
		
	printf("congratulation!");
	return 0;
}

