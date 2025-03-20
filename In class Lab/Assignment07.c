#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printorder(void);

int main(void)
{
	printorder();


	return 0;
}

void printorder(void)
{
	char size;
	int num;

	printf("커피 사이즈(S, T, G)와 주문 수량?");
	scanf("%c %d", &size, &num);
	printf("%c 사이즈 커피 %d잔 주문합니다.\n", size, num);

	return;
}