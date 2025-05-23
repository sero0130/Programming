/*
*파일명 ch06-05.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : RGB 색을 만들어 리턴하는 함수 정의 후 RGB 색상의 보색을 구해서 출력하는 프로그램 작성
*작성일 : 20250523
*문제 번호 : 6-9
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb(int r, int g, int b);
int get_red(int rgb);
int get_green(int rgb);
int get_blue(int rgb);
int Assignment09(void);

int main(void)
{
	Assignment09();

	return 0;
}

int Assignment09(void)
{
	int r = 0, g = 0, b = 0;
	int rgb = 0;
	int rrgb = 0;
	
	//RGB 색상 입력
	printf("RGB 색상 입력 : ");
	scanf("%i", &rgb);

	//RGB 색상에서 빨간색, 초록색, 파란색 추출
	r = get_red(rgb);
	g = get_green(rgb);
	b = get_blue(rgb);

	//RGB 색상에서 보색 추출
	r = 255 - r;
	g = 255 - g;
	b = 255 - b;

	rrgb = make_rgb(r, g, b);

	//보색 출력
	printf("RGB %X의 보색 : %06X\n",rgb, rrgb);


	return 0;
}

int make_rgb(int r, int g, int b)
{
	int rgb = 0;

	//입력받은 RGB 만들기
	rgb = (r << 16) | (g << 8) | b;


	//RGB 색상 리턴
	return rgb;
}

int get_red(int rgb)
{
	int red = 0;
	//RGB 색상에서 빨간색 추출
	red = (rgb >> 16) & 0xFF;
	
	//빨간색 리턴
	return red;
}

int get_green(int rgb)
{
	int green = 0;
	
	//RGB 색상에서 초록색 추출
	green = (rgb >> 8) & 0xFF;
	
	//초록색 리턴
	return green;
}

int get_blue(int rgb)
{
	int blue = 0;

	//RGB 색상에서 파란색 추출
	blue = rgb & 0xFF;

	//파란색 리턴
	return blue;
}