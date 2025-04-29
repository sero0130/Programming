/*
*파일명 ch0504
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 온도를 입력받아 섭씨온도와 화씨온도로 변환 하는 프로그램
*작성일 : 20250429
*문제 번호 : 5-5
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0504(void);
double celsius(double fahreheit);
double fahrenheit(double celsius);

int main(void)
{
	assignment0504();

	return 0;
}

/*
* 함수 이름 : assignment0504
* 기능 : 온도를 입력받아 섭씨온도와 화씨온도로 변환
* 반환값 : 0 반환
*/

int assignment0504(void)
{
	//1. 온도 입력받을 변수 설정
	double temp = 0.0;
	char unit = 0;

	printf("온도 입력 (섭씨온도 C, 화씨온도 F) : ");
	scanf("%lf %c", &temp, &unit);
	
	//2. 온도 변환
	switch (unit)
	{
	case 'C':
		printf("%.2lf ==> %.2lf", temp, fahrenheit(temp));
		break;

	case 'F':
		printf("%.2lf ==> %.2lf", temp, celsius(temp));
		break;

	default:
		printf(" C 또는 F로만 입력하세요.");
		break;
	}


	return 0;
}

/*
* 함수 이름 : celsius
* 기능 : 화씨온도를 섭씨온도로 변환
* 반환값 : 섭씨온도 반환
*/

double celsius(double fahrenheit)
{
	//1. 화씨온도를 섭씨온도로 변환
	double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
	return celsius;
}

/*
* 함수 이름 : fahrenheit
* 기능 : 섭씨온도를 화씨온도로 변환
* 반환값 : 화씨온도 반환
*/

double fahrenheit(double celsius)
{
	//1. 섭씨온도를 화씨온도로 변환
	double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
	return fahrenheit;
}