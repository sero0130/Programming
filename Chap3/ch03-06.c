//202511220 박찬웅
//실수값을 입력받고 제곱과 세제곱을 구하는 프로그램
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void squarecube(void);

int main(void)
{
	squarecube();
	
	return 0;
}

void squarecube(void)
{
	float number = 0.0f;
	printf("실수: ");
	scanf("%f", &number);
	printf("제곱: %e\n 세제곱: %e\n", number * number, number * number * number);

	return;
}