//학번 + 이름 : 202511220 박찬웅
//프로그램명 : 질량과 속도를 입력받아 운동에너지를 계산하는 프로그램
//작성일 : 20250409

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void kineticenergy(void);

int main(void)
{
	kineticenergy();

	return 0;
}

void kineticenergy(void)
{
	double mass = 0.0, velocity = 0.0, energy = 0.0;

	scanf("%lf %lf", &mass, &velocity);
	energy = 0.5 * mass * velocity * velocity;
	printf("%.2lf\n", energy);
	


	return;
}