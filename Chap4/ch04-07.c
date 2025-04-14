/*
*파일명 ch0407
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 32비트 크기의(부호없는 정수형)인 4변수에 각각 7, 15, 23, 31 번 비트에 1을 설정하고 어떤 값인지 알아보는 프로그램
*작성일 : 20250414
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0407(void);
int getBit(int n, int bit);

int main(void)
{
	assignment0407();

	return 0;
}

/*
* 함수 이름	: assignment0407
* 기능	: 32비트 크기의(부호없는 정수형)인 4변수에 각각 7, 15, 23, 31 번 비트에 1을 설정하고 어떤 값인지 알아보는 프로그램
* 반환값	: 0 반환
*/

int assignment0407(void)
{
	//1. 32비트 크기의(부호없는 정수형)인 4변수 설정
	unsigned int a = 0, b = 0, c = 0, d = 0;
	//2. 각각 7, 15, 23, 31 번 비트에 1을 설정
	a = getBit(a, 7);
	b = getBit(b, 15);
	c = getBit(c, 23);
	d = getBit(d, 31);
	//3. 각각의 비트에 1을 설정한 값 출력
	printf("7번 비트만 1인 값 %08X %u\n", a, a);
	printf("15번 비트만 1인 값 %08X %u\n", b, b);
	printf("23번 비트만 1인 값 %08X %u\n", c, c);
	printf("31번 비트만 1인 값 %08X %u\n", d, d);
	return 0;
}

/*
* 함수 이름	: getBit
* 기능	: 32비트 크기의(부호없는 정수형)인 n의 bit 번째 비트에 1을 설정
* 반환값	: n의 bit 번째 비트에 1을 설정한 값 반환
*/

int getBit(int n, int bit)
{

	unsigned int mask = 0;
	//1. n의 bit 번째 비트에 1을 설정
	mask = n |= 1 << bit;

	return mask;
}