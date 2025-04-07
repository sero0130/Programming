//202511220 박찬웅
//질량과 높이를 입력받아 위치 에너지를 구하는 프로그램
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void potentialenergy(void);

int main(void)
{
	potentialenergy();

	return 0;
}

void potentialenergy(void)
{
	int mass = 0;
	int height = 0;
	float potential_energy = 0.0f;
	printf("물체의 질량(kg)과 높이(m)를 입력하시오: ");
	scanf("%d %d", &mass, &height);
	potential_energy = mass * height * 9.8f;
	printf("물체의 위치 에너지: %f J\n", potential_energy);

	return;
}