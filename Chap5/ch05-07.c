/*
*���ϸ� ch0507
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �����ð� �Է¹޾� ������� ��� �� ����ϴ� ���α׷�
*�ۼ��� : 20250429
*���� ��ȣ : 5-17
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0507(void);
int getFee(int time);

int main(void)
{
	assignment0507();

	return 0;
}

/*
* �Լ� �̸� : assignment0507
* ��� : �����ð� �Է¹޾� ������� ���
* ��ȯ�� : 0 ��ȯ
*/

int assignment0507(void)
{
	//1. �����ð� �Է¹��� ���� ����
	int time = 0, fee = 0;

	//2. �����ð� �Է¹ޱ�
	printf("�����ð�(��) : ");
	scanf("%d", &time);

	//3. ������� ���
	fee = getFee(time);

	//4. ������� ���
	printf("������� : %d��\n", fee);

	return 0;
}

/*
* �Լ� �̸� : getFee
* ��� : �����ð� �Է¹޾� ������� ���
* ��ȯ�� : ������� ��ȯ
*/

int getFee(int time)
{
	//1. ������� ���� ����
	int Fee = 0;

	//2. ������� ���
	if (time <= 30)
	{
		Fee = 2000;
	}
	else
	{
		Fee = (time / 10) * 1000;
	}

	if (Fee >= 25000)
	{
		Fee = 25000;
	}

	return Fee;
}