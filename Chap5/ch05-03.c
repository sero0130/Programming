/*
*파일명 ch0503
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 연도를 입력받아 윤년인지 검사하는 프로그램
*작성일 : 20250429
*문제 번호: 5-4
*버전 : v0.1
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int assignment0503(void);
int leapYear(int year);

int main(void)
{
	assignment0503();

	return 0;
}

/*
* 함수 이름 : assignment0503
* 기능 : 연도를 입력받아 윤년인지 검사함
* 반환값 : 0 반환
*/

int assignment0503(void)
{
	//1. 연도 입력받을 변수 설정
	int year = 0, truefalse = 0;
	
	//2. 연도 입력받기
	printf("연도 입력 : ");
	scanf("%d", &year);
	//3. 윤년 검사
	truefalse = leapYear(year);
	//4. 윤년인지 검사 결과 출력
	if (truefalse == 1)
	{
		printf("%d년은 윤년입니다.\n", year);
	}
	else
	{
		printf("%d년은 평년입니다.\n", year);
	}
	return 0;
}

/*
* 함수 이름 : leapYear
* 기능 : 연도를 입력받아 윤년인지 0또는 1로 검사
* 반환값 : 윤년이면 1, 평년이면 0 반환
*/
	

	int leapYear(int year)
{

	//1. 윤년인지 검사
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return 1;
		// 윤년
	}
	else
	{
		return 0;
		// 평년
	}

}