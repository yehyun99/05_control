#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	printf("input a char:");
	scanf("%c",&a);
	if('A'<=a && a<='Z')
		printf("%c는 대문자 입니다.\n",a);
	else if('a'<=a && a<='z') 
		printf("%c는 소문자  입니다.\n",a);
	else if('0'<=a && a<='9') 
		printf("%c는 숫자 입니다.\n",a);
	else 
		printf("기타 글자입니다.\n");
	
	
	return 0;
}

