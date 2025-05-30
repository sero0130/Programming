/*
*파일명 ch07-01.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 첫번째 항의 값과 공차를 입력받아 배열을 채우고 출력하는 프로그램
*작성일 : 20250530
*문제 번호 : 7-1
*버전 : v0.1
*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment0701(void);
int fill_array(int first, int diff, int arr[], int size);


int main(void)
{
	assignment0701();

	return 0;
}

/*
* 함수명 : assignment0701
* 기능 : 첫번째 항의 값과 공차를 입력받아 배열을 채우고 출력하는 프로그램
* 반환값 : void
*/

void assignment0701(void)
{
	int first = 0, diff = 0;
	int arr[10] = { 0 };

	// 첫번째 항의 값과 공차 입력
	printf("첫번째 항의 값과 공차 입력 : ");
	scanf("%d %d", &first, &diff);
	
	// 배열 채우기 함수 호출
	fill_array(first, diff, arr, 10);

	// 배열 출력
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", arr[i]);
	}

	return;
}

/*
* 함수명 : fill_array
* 기능 : 첫번째 항의 값과 공차를 입력받아 배열을 채우는 함수
* 반환값 : 0
*/

int fill_array(int first, int diff, int arr[], int size)
{
	int i = 0;
	
	// 배열을 채우기 위한 반복문
	for (i = 0; i < size; i++)
	{
		arr[i] = first + i * diff;
	}
	
	return 0;
}