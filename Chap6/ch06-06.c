/*
*���ϸ� ch06-06.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� �Լ� �ۼ� 0~999 ������ ������ ���� 3�� ���� ���� ��� ���
*�ۼ��� : 20250523
*���� ��ȣ : 6-18
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int divisor(int num);
int Assignment18(void);

int main(void)
{
	Assignment18();

	return 0;
}


/*
* �Լ��� : Assignment18
* ��� : 0~999 ������ ������ ���� 3�� ���� ���� ��� ���
* ��ȯ�� : 0
*/

int Assignment18(void)
{
	int i = 0;
	int num = 0;

	//������ ���� 3�� ����
	for (i = 0; i < 3; i++)
	{
		num = rand() % 1000; // 0~999 ������ ���� ����
		divisor(num);
	}

	return 0;
}

/*
* �Լ��� : divisor
* ��� : ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� �Լ�
* ��ȯ�� : 0
*/

int divisor(int num)
{
	int i = 0, count = 0;
	int result = 0;

	//��� ���ϱ�
	printf("%d�� ��� : ", num);
	for (i = 1; i <= num; i++)
	{
		if (num % i == 0)
		{
			result = i;
			printf("%d ", result);
			count++;
		}
	}

	//��� ���� ���
	printf(" => �� %d��\n", count);

	return 0;
}