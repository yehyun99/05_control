#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0;								//�ʱ�ȭ �� ��Ű��  
	char c;
	printf("input a string:");
	
	while((a=getchar())!='\n'){
		if('0'<=c && c<='9'){
			a++;
		}
			
	}		
	printf("the number of digits are %d",c);	
				
	return 0;
}

