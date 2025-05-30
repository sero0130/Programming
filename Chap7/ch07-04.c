/*
*���ϸ� ch07-04.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : 2���� 3x3 ����� ���� ���ϴ� ���α׷� �ۼ�
*�ۼ��� : 20250530
*���� ��ȣ : 7-10
*���� : v0.1
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
 * �Լ��� : assignment0710
 * ��� : 2���� 3x3 ����� ���� ���ϴ� ���α׷� �ۼ�
 * ��ȯ�� : void
 */
void assignment0710(void)
{
	int a[SIZE][SIZE] = { {10, 20, 30}, {40, 50, 60}, {70, 80, 90} };
	int b[SIZE][SIZE] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
	int result[SIZE][SIZE] = { 0 };
	
	// ��� �� ���
	add_matrices(a, b, result);

	// ��� ���
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
* �Լ��� : add_matrices
* ��� : �� ����� ���� ����ϴ� �Լ�
* ��ȯ�� : void
*/

void add_matrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE])
{
	// �� ����� ���� ���
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}
}

