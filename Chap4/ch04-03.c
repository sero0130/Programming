/*
*파일명 ch0403
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 반지름의 길이을 입력받아 원의 부피를 구하는 프로그램
*작성일 : 20250414
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0403(void);
double getVolume(double r);

int main(void)
{
	assignment0403();

	return 0;
}
/*
* 함수이름: assignment0403
* 기능: 반지름 입력, 원의 부피 계산 함수 호출, 원의 부피 출력
* 반환값 : 0 반환
*/

int assignment0403(void)
{
	//1. 반지름 변수 설정
	double radius = 0.0, volume = 0.0;
	//2. 반지름 입력받기
	scanf("%lf", &radius);
	//3. 함수 호출 및 부피값 저장
	volume = getVolume(radius);
	//4. 출력
	printf("%.lf", volume);

	//5. 함수 종료
	return 0;
}

/*
* 함수 이름 : getVolume
* 기능 : 반지름 입력받아 원의 부피 계산
* 반환값 : 원의 부피 반환
*/

double getVolume(double r)
{
	//1. 원의 부피 변수 설정, 파이 변수 설정
	double volume = 0.0;
	double pi = 3.141592;
	//2. 원의 부피 계산
	volume = 4.0 / 3.0 * pi * (r * r * r);
	//3. 계산값 반환
	return volume;
}