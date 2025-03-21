//202511220 박찬웅
//16진수 정수를 입력받고 10진수로 출력하는 프로그램
//2025.03.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printdecimal(void);

int main(void)
{
	printdecimal();

	return 0;
}

void printdecimal(void)
{
	int num;
	printf("16진수 정수?");
	scanf("%x", &num);
	printf("16진수 %x는 10진수로 %d입니다.", num, num);

	return;
}