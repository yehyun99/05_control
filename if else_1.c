#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a;
	printf("input a char:");
	scanf("%c",&a);
	if('A'<=a && a<='Z')
		printf("%c�� �빮�� �Դϴ�.\n",a);
	else if('a'<=a && a<='z') 
		printf("%c�� �ҹ���  �Դϴ�.\n",a);
	else if('0'<=a && a<='9') 
		printf("%c�� ���� �Դϴ�.\n",a);
	else 
		printf("��Ÿ �����Դϴ�.\n");
	
	
	return 0;
}

