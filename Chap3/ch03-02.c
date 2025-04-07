//202511220 박찬웅
//직사각형의 가로와 세로를 입력받고 넓이와 둘레를 출력하는 프로그램
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
	int width = 0;
	
	printf("직사각형의 가로와 세로의 길이를 입력하시오: ");
	scanf("%d %d", &length, &width);
	printf("직사각형의 넓이: %d\n 직사각형의 둘레: %d\n", length * width, (length + width) * 2);
	return;
}