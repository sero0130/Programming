/*
*파일명 ch0401
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 질량과 속력을 실수로 입력받아 운동에너지를 구하는 프로그램
*작성일 : 20250409
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0401(void);
double getMovingEnergy(double m, double v);

int main(void)
{
	assignment0401();

	return 0;
}

/*
함수 이름 : assignment0401
함수 기능 : 질량 입력, 속력 입력, 운동에너지 계산 함수 호출, 운동에너지 출력
반환값 :  0반환
*/

int assignment0401(void)
{
	//1. 변수 설정
	double mass = 0.0, velocity = 0.0, energy = 0.0;
	//2. 질량, 속력 입력받기
	scanf("%lf %lf", &mass, &velocity);
	//3. 함수 호출
	energy = getMovingEnergy(mass, velocity);
	//4. 출력
	printf(".2lf", energy);


	return 0;
}


/*
함수 이름 : getMovingEnergy
함수 기능 : 질량, 속력 입력받아 운동에너지 계산
반환값 : 운동에너지 반환
*/

double getMovingEnergy(double m, double v)
{
	//1. 운동에너지 변수 설정
	double energy = 0.0;
	//2. 운동에너지 계산
	energy = 1.0 / 2.0 * m * v * v;
	//3.계산값 반환
	return energy;
}