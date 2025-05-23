/*
*파일명 ch06-03.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 인자로 전달받은 정수가 짝수인지 홀수인지 검사하는 함수 작성
*작성일 : 20250523
*문제 번호 : 6-5
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int num);
int is_odd(int num);
int Assignment05(void);


int main(void)
{
	Assignment05();

	return 0;
}

/*
* 함수명 : Assignment05
* 기능 : 정수를 입력받아 짝수 홀수 개수 세기
* 반환값 : 0
*/

int Assignment05(void)
{
	int num = 0, countEven = 0, countOdd = 0;

	//정수 입력
	printf("정수 빈칸 구분해서 입력 (마지막에 0 입력) :\n ");

	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			break;
		}
		//짝수 홀수 검사
		if (is_even(num))
		{
			countEven++;
		}
		else if (is_odd(num))
		{
			countOdd++;
		}
		else
		{
			printf("정수가 아닙니다.\n");
			continue;
		}
	}
		//결과 출력
		printf("입력 받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", countEven, countOdd);


	return 0;
}

/*
* 함수명 : is_even
* 기능 : 정수가 짝수인지 검사하는 함수
* 반환값 : 1(짝수) / 0(홀수)
*/

int is_even(int num)
{
	if (num % 2 == 0)
	{
		return 1; //짝수
	}
	else
	{
		return 0; //홀수
	}
}

/*
* 함수명 : is_odd
* 기능 : 정수가 홀수인지 검사하는 함수
* 반환값 : 1(홀수) / 0(짝수)
*/

int is_odd(int num)
{
	if (num % 2 == 1)
	{
		return 1; //홀수
	}
	else
	{
		return 0; //짝수
	}
}