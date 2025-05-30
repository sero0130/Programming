/*
*파일명 ch07-04.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 2개의 3x3 행렬의 합을 구하는 프로그램 작성
*작성일 : 20250530
*문제 번호 : 7-10
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define SIZE 3

void assignment0710(void);
void add_matrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]);

int main(void)
{
	assignment0710();
	
	return 0;
}

/*
 * 함수명 : assignment0710
 * 기능 : 2개의 3x3 행렬의 합을 구하는 프로그램 작성
 * 반환값 : void
 */
void assignment0710(void)
{
	int a[SIZE][SIZE] = { {10, 20, 30}, {40, 50, 60}, {70, 80, 90} };
	int b[SIZE][SIZE] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
	int result[SIZE][SIZE] = { 0 };
	
	// 행렬 합 계산
	add_matrices(a, b, result);

	// 결과 출력
	printf("Result Matrix:\n");
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	return;
}
/*
* 함수명 : add_matrices
* 기능 : 두 행렬의 합을 계산하는 함수
* 반환값 : void
*/

void add_matrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE])
{
	// 두 행렬의 합을 계산
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}

