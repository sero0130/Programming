/*
*���ϸ� ch07-01.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ù��° ���� ���� ������ �Է¹޾� �迭�� ä��� ����ϴ� ���α׷�
*�ۼ��� : 20250530
*���� ��ȣ : 7-1
*���� : v0.1
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
* �Լ��� : assignment0701
* ��� : ù��° ���� ���� ������ �Է¹޾� �迭�� ä��� ����ϴ� ���α׷�
* ��ȯ�� : void
*/

void assignment0701(void)
{
	int first = 0, diff = 0;
	int arr[10] = { 0 };

	// ù��° ���� ���� ���� �Է�
	printf("ù��° ���� ���� ���� �Է� : ");
	scanf("%d %d", &first, &diff);
	
	// �迭 ä��� �Լ� ȣ��
	fill_array(first, diff, arr, 10);

	// �迭 ���
	for (int i = 0; i < 10; i++)
	{
		printf(" %d ", arr[i]);
	}

	return;
}

/*
* �Լ��� : fill_array
* ��� : ù��° ���� ���� ������ �Է¹޾� �迭�� ä��� �Լ�
* ��ȯ�� : 0
*/

int fill_array(int first, int diff, int arr[], int size)
{
	int i = 0;
	
	// �迭�� ä��� ���� �ݺ���
	for (i = 0; i < size; i++)
	{
		arr[i] = first + i * diff;
	}
	
	return 0;
}