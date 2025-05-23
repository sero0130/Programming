/*
*파일명 ch06-06.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 인자로 전달된 정수의 약수를 구해서 출력하는 함수 작성 0~999 사이의 임의의 정수 3개 생성 각각 약수 출력
*작성일 : 20250523
*문제 번호 : 6-18
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int divisor(int num);
int Assignment18(void);

int main(void)
{
	Assignment18();

	return 0;
}


/*
* 함수명 : Assignment18
* 기능 : 0~999 사이의 임의의 정수 3개 생성 각각 약수 출력
* 반환값 : 0
*/

int Assignment18(void)
{
	int i = 0;
	int num = 0;

	//임의의 정수 3개 생성
	for (i = 0; i < 3; i++)
	{
		num = rand() % 1000; // 0~999 사이의 정수 생성
		divisor(num);
	}

	return 0;
}

/*
* 함수명 : divisor
* 기능 : 인자로 전달된 정수의 약수를 구해서 출력하는 함수
* 반환값 : 0
*/

int divisor(int num)
{
	int i = 0, count = 0;
	int result = 0;

	//약수 구하기
	printf("%d의 약수 : ", num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			result = i;
			printf("%d ", result);
			count++;
		}
	}

	//약수 개수 출력
	printf(" => 총 %d개\n", count);

	return 0;
}