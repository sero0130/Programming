/*
*파일명 ch05-01
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 영역을 선택하여 점의 좌표가 선택한 직사각형 안에 있는지 확인하는 프로그램
*작성일 : 20250429
*문제 번호 : 5-1
*버전 : v0.1
*/


#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int assignment0501(void);
int chooseArea(int left, int top, int right, int bottom);

int main(void)
{
	assignment0501();

	return 0;
}

/*
 * 함수 이름 : assignment0501
 * 기능 : 사각형 좌상단 점과 우하단 점을 입력받아 사각형 안에 있는지 확인하는 프로그램
 * 반환값 : 0 반환
 */
 

int assignment0501(void)
{
	// 1. 사각형 좌상단 점과 우하단 점 입력받기
	int l = 0, t = 0, r = 0, b = 0;
	printf("좌상단 점(left, top) : ");
	scanf("%d %d", &l, &t);
	printf("우하단 점(right, bottom) : ");
	scanf("%d %d", &r, &b);

	//2. 함수 호출
	chooseArea(l, t, r, b);

	return 0;
}

/*
* 함수 이름 : chooseArea
* 기능 : 선택한 점의 좌표가 직사각형 안에 있는지 확인하는 함수 
* 반환값 : 0반환
*/

int chooseArea(int left, int top, int right, int bottom)
{
	int x = 0, y = 0;
	//1. x, y 좌표 입력받기
	printf("점의 좌표를 입력하세요 : ");
	scanf("%d %d", &x, &y);
	//2. x, y 좌표가 사각형 안에 있는지 확인
	if ((x >= left && x <= right) && (y >= top && y <= bottom))
	{
		printf("직사각형 모양의 선택영역 내의 점입니다.\n");
	}
	else
	{
		printf("직사각형 모양의 선택영역 밖의 점입니다.\n");
	}

	return 0;
}

