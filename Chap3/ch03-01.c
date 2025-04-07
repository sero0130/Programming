//202511220 박찬웅
//한변의 길이를 입력받고 정사각형의 넓이와 둘레를 출력하는 프로그램
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void areaperimeter(void);

int main(void)
{
	areaperimeter();
	return 0;
}

void areaperimeter(void)
{
	int length = 0;
	printf("정사각형의 한변의 길이를 입력하시오: ");
	scanf("%d", &length);
	printf("정사각형의 넓이: %d\n 정사각형의 둘레: %d\n", length * length, length * 4);

	return;
}

