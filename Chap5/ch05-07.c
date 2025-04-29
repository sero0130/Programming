/*
*파일명 ch0507
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 주차시간 입력받아 주차요금 계산 후 출력하는 프로그램
*작성일 : 20250429
*문제 번호 : 5-17
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0507(void);
int getFee(int time);

int main(void)
{
	assignment0507();

	return 0;
}

/*
* 함수 이름 : assignment0507
* 기능 : 주차시간 입력받아 주차요금 출력
* 반환값 : 0 반환
*/

int assignment0507(void)
{
	//1. 주차시간 입력받을 변수 설정
	int time = 0, fee = 0;

	//2. 주차시간 입력받기
	printf("주차시간(분) : ");
	scanf("%d", &time);

	//3. 주차요금 계산
	fee = getFee(time);

	//4. 주차요금 출력
	printf("주차요금 : %d원\n", fee);

	return 0;
}

/*
* 함수 이름 : getFee
* 기능 : 주차시간 입력받아 주차요금 계산
* 반환값 : 주차요금 반환
*/

int getFee(int time)
{
	//1. 주차요금 변수 설정
	int Fee = 0;

	//2. 주차요금 계산
	if (time <= 30)
	{
		Fee = 2000;
	}
	else
	{
		Fee = (time / 10) * 1000;
	}

	if (Fee >= 25000)
	{
		Fee = 25000;
	}

	return Fee;
}