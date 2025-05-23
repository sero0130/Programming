/*
*파일명 ch06-02.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 두 점 사이의 직선거리를 구하는 함수 작성
*작성일 : 20250523
*문제 번호 : 6-3
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);
int Assignment03(void);

int main(void)
{
	//함수 호출
	Assignment03();

	return 0;
}


/*
* 함수명 : Assignment03
* 기능 : 두 점의 좌표를 입력받아 함수에 전달 후 거리 출력
* 반환값 : 0
*/

int Assignment03(void)
{
	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
	double result = 0.0;

	//좌표 입력
	printf("시작 좌표 : ");
	scanf("%lf %lf", &x1, &y1);
	printf("끝 좌표 : ");
	scanf("%lf %lf", &x2, &y2);

	//함수 호출
	result = distance(x1, y1, x2, y2);
	//결과 출력
	printf("두 점 사이의 거리 : %lf\n", result);

	return 0;
}

/*
* 함수명 : distance
* 기능 : 두 점 사이의 직선거리를 구하는 함수
* 반환값 : 거리
*/

double distance(double x1, double y1, double x2, double y2)
{
	//두 점 사이의 거리 구하기
	double result = 0.0;
	result = sqrt((pow((x2 - x1), 2) + pow((y2 - y1), 2)));

	return result;
}