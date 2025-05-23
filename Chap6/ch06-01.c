/*
*파일명 ch06-01.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 가로와 세로를 매개변수로 전달받아 둘레 구하는 함수 작성
*작성일 : 20250523
*문제 번호 : 6-1
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int getperimeter(int width, int height);
int Assignment01(void);

int main(void)
{
	//함수 호출
	Assignment01();

	return 0;
}

/*
* 함수명 : Assignment01
* 기능 : 가로와 세로를 입력받아 함수에 전달 후 출력
* 반환값 : 0
*/

int Assignment01(void)
{
	int width = 0, height = 0;
	int result = 0;

	//가로 세로 입력
	printf("가로와 세로를 입력 : ");
	scanf("%d %d", &width, &height);

	//함수 호출
	result = getperimeter(width, height);

	//결과 출력
	printf("둘레 : %d\n", result);

	return 0;
}

/*
* 함수명 : getperimeter
* 기능 : 가로와 세로를 매개변수로 전달받아 둘레를 구하는 함수
* 반환값 : 둘레
*/

int getperimeter(int width, int height)
{
	//둘레 구하기
	int perimeter = 0;
	perimeter = (width + height) * 2;

	return perimeter;
}
