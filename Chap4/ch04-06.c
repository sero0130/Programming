/*
*파일명 ch0406
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : rgb 값 입력받아 RGB 색상을 만들어서 출력하는 프로그램
*작성일 : 20250414
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0406(void);
int getRGB(int r, int g, int b);

int main(void)
{
	assignment0406();

	return 0;
}

/*
* 함수 이름: assignment0406
* 기능 : RGB 값 입력받아 RGB 색상 출력
* 반환값 : 0 반환
*/

int assignment0406(void)
{
	//1. RGB 값 변수 설정
	unsigned char r = 0, g = 0, b = 0;
	unsigned int rgb = 0;
	//2. RGB 값 입력받기
	printf("red(0~255): ");
	scanf("%hhu", &r);
	printf("green(0~255): ");
	scanf("%hhu", &g);
	printf("blue(0~255): ");
	scanf("%hhu", &b);

	//3. RGB 색상 출력
	rgb = getRGB(r, g, b);
	printf("RGB 트루컬러 : %06X", rgb);

	return 0;
}

/*
* 함수 이름: getRGB
* 기능 : RGB 값 입력받아 RGB 색상 계산
* 반환값: RGB 색상 반환
*/


int getRGB(int r, int g, int b)
{
	unsigned int rrggbb = 0;
	//1.rgb 값 출력
	rrggbb = r | g << 8 | b << 16;

	return rrggbb;
}