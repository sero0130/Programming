//202511220 박찬웅
//8진수, 10진수, 16진수 중 하나 입력받아 각각 얼마에 해당하는지 출력하는 프로그램
//2025.03.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void checktype(void);

int main(void)
{
	checktype();

	return 0;
}

void checktype(void)
{
	int num;
	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
	printf("정수?");
	scanf("%i", &num);
	printf("8진수: 0%o\n", num);
	printf("10진수: %d\n", num);
	printf("16진수: %x\n", num);

	return;
}
