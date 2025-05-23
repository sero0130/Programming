/*
*파일명 ch06-07.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수 작성( 수치데이터는 0~ 9999 사이의 임의의 정수, 스케일은 100)
*작성일 : 20250523
*문제 번호 : 6-19
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int graph(int data, int scale);
int Assignment19(void);

int main(void)
{
	Assignment19();

	return 0;
}

/*
* 함수명 : Assignment19
* 기능 : 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수 작성( 수치데이터는 0~ 9999 사이의 임의의 정수, 스케일은 100)
* 반환값 : 0
*/

int Assignment19(void)
{
	int data = 0;
	int scale = 0;
	int i = 0;

	//임의의 정수 생성
	data = rand() % 10000; // 0~9999 사이의 정수 생성
	scale = 100; //스케일

	//그래프 출력
	for (i = 0; i < 3; i++)
	{
		graph(data, scale);
		data = rand() % 10000; // 0~9999 사이의 정수 생성
	}


	return 0;

}

/*
* 함수명 : graph
* 기능 : 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 함수
* 반환값 : 0
*/

int graph(int data, int scale)
{
	int i = 0;
	int result = 0;

	//그래프 출력
	printf("%d : ", data);
	for (i = 0; i < data / scale; i++)
	{
		printf("*");
	}
	printf("\n");

	return 0;
}

