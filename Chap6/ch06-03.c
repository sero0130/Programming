/*
*���ϸ� ch06-03.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���ڷ� ���޹��� ������ ¦������ Ȧ������ �˻��ϴ� �Լ� �ۼ�
*�ۼ��� : 20250523
*���� ��ȣ : 6-5
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int num);
int is_odd(int num);
int Assignment05(void);


int main(void)
{
	Assignment05();

	return 0;
}

/*
* �Լ��� : Assignment05
* ��� : ������ �Է¹޾� ¦�� Ȧ�� ���� ����
* ��ȯ�� : 0
*/

int Assignment05(void)
{
	int num = 0, countEven = 0, countOdd = 0;

	//���� �Է�
	printf("���� ��ĭ �����ؼ� �Է� (�������� 0 �Է�) :\n ");

	while (1)
	{
		scanf("%d", &num);
		if (num == 0)
		{
			break;
		}
		//¦�� Ȧ�� �˻�
		if (is_even(num))
		{
			countEven++;
		}
		else if (is_odd(num))
		{
			countOdd++;
		}
		else
		{
			printf("������ �ƴմϴ�.\n");
			continue;
		}
	}
		//��� ���
		printf("�Է� ���� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", countEven, countOdd);


	return 0;
}

/*
* �Լ��� : is_even
* ��� : ������ ¦������ �˻��ϴ� �Լ�
* ��ȯ�� : 1(¦��) / 0(Ȧ��)
*/

int is_even(int num)
{
	if (num % 2 == 0)
	{
		return 1; //¦��
	}
	else
	{
		return 0; //Ȧ��
	}
}

/*
* �Լ��� : is_odd
* ��� : ������ Ȧ������ �˻��ϴ� �Լ�
* ��ȯ�� : 1(Ȧ��) / 0(¦��)
*/

int is_odd(int num)
{
	if (num % 2 == 1)
	{
		return 1; //Ȧ��
	}
	else
	{
		return 0; //¦��
	}
}