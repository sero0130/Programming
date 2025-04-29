/*
*파일명 ch0505
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 비트연산 계산기
*작성일 : 20250429
*문제 번호 : 5-8
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0505(void);
int bitCalculator(int a, int b, char op);

int main(void)
{
	assignment0505();

	return 0;
}

/*
* 함수 이름 : assignment0505
* 기능 : 비트연산 계산기 입출력
* 반환값 : 0 반환
*/

int assignment0505(void)
{
	//1. 비트 연산식 입력받을 변수 설정
	int a = 0, b = 0, result;
	char op = 0;
	
	//2. 비트 연산식 입력받기
	printf("비트 연산식 입력 : ");
	scanf("%i %c %i", &a, &op, &b);
	
	//3. 결과값 받기
	result = bitCalculator(a, b, op);

	//4. 결과 출력
	printf("%X %c %X = %X\n", a, op, b, result);

	return 0;
}

/*
* 함수 이름 : bitCalculator
* 기능 : 비트연산 계산기
* 반환값 : 연산 결과 반환
*/

int bitCalculator(int a, int b, char op)
{
	//1. 연산자에 따라 비트 연산
	switch (op)
	{
	case'&':
		//2.비트 AND 연산
		return a & b;
	case'|':
		//2. 비트 OR 연산
		return a | b;
	case'^':
		//2. 비트 XOR 연산
		return a ^ b;
	default:
		//3. 잘못된 연산자 입력시 0 반환
		return 0;
	}
}