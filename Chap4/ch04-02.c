/*
*파일명 ch0402
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 화씨온도를 실수로 입력받아 섭씨온도로 변환하는 프로그램
*작성일 : 20250414
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0402(void);
double getCelsius(double f);

int main(void)
{
	assignment0402();

	return 0;
}

/*
* 함수 이름: assignment0402
* 기능 : 화씨온도 입력, 섭씨 온도 계산 호출, 섭씨온도 출력
* 반환값 : 0 반환
*/

int assignment0402(void)
{
	//1. 화씨온도 변수 설정
	double fahrenheit = 0.0, celsius = 0.0;
	//2. 화씨온도 입력받기
	printf("화씨온도: ");
	scanf("%lf", &fahrenheit);
	//3. 함수 호출 및 섭씨온도 저장
	celsius = getCelsius(fahrenheit);
	//4. 출력
	printf("%.2lf F = %.2lf C", fahrenheit, celsius);
	return 0;
}

/*
* 함수 이름 : getCelsius
* 기능 : 화씨온도 입력받아 섭씨온도로 변환
* 반환값 : 섭씨온도 반환
*/

double getCelsius(double f)
{
	//1. 섭씨온도 변수 설정
	double celsius = 0.0;
	//2. 섭씨온도 계산
	celsius = (f - 32.0) * 5.0 / 9.0;
	//3. 계산값 반환
	return celsius;
}