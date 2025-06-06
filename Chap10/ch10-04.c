/*
*파일명 ch10-04.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 직사각형 정보 나타내는 RECT 구조체 정의, 점의 좌표는 POINT 구조체를 이용해 정의, 직사각형 정보를 출력하는  print_rect 함수 정의
*작성일 : 20250606
*문제 번호 : 10-13
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
* 구조체명 : point
* 기능 : 점의 좌표를 저장하기 위한 구조체
* 멤버변수 :
* - x : x 좌표를 저장하는 정수형 변수
* - y : y 좌표를 저장하는 정수형 변수
*/

typedef struct point
{
	int x;  // x 좌표
	int y;  // y 좌표
} POINT;

/*
* 구조체명 : rect
* 기능 : 직사각형 정보를 저장하기 위한 구조체
* 멤버변수 :
* - bottom_left : 좌측 하단 좌표를 저장하는 POINT 구조체
* - top_right : 우측 상단 좌표를 저장하는 POINT 구조체
*/

typedef struct rect
{
	POINT bottom_left;     // 좌측 하단 좌표
	POINT top_right; // 우측 상단 좌표
} RECT;

int print_rect(void);

int main(void)
{
	print_rect();
	
	return 0;
}


/*
* 함수명 : print_rect
* 기능 : 직사각형 좌표를 입력받아 RECT 구조체에 저장하고 출력하는 함수
* 반환값 : 0
*/

int print_rect(void)
{
	RECT rect;

	// 직사각형 좌표 입력
	printf("좌측 하단 좌표 (x y) : ");
	scanf("%d %d", &rect.bottom_left.x, &rect.bottom_left.y);
	printf("우측 상단 좌표 (x y) : ");
	scanf("%d %d", &rect.top_right.x, &rect.top_right.y);

	// 직사각형 정보 출력
	printf("RECT 좌하단 좌표 : (%d, %d) ", rect.bottom_left.x, rect.bottom_left.y);
	printf("우상단 좌표 : (%d, %d)\n", rect.top_right.x, rect.top_right.y);

	return 0;
}