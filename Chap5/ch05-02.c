/*
*���ϸ� ch05-02
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �Ž������� �ݾ��� �Է¹޾� �ݾ׺��� � �ʿ����� ���ؼ� ����ϴ� ���α׷�
*�ۼ��� : 20250429
*���� ��ȣ : 5-3
*���� : v0.1
*/

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int assignment0502(void);
int getChange(int money);

int main(void)
{
	assignment0502();

	return 0;
}

int assignment0502(void)
{
	//1. �Ž����� �ݾ� ���� ����
	int money = 0;
	printf("�Ž����� �ݾ� : ");
	scanf("%d", &money);

	//2.�Ž��������� 10�� �̸��� �ִٸ� ����
	if (money % 10 != 0)
	{
		money = money - (money % 10);
	}
	else
	{
		money = money;
	}

	//3. 10�� ���� �� ���
	printf("10�� ���� �ݾ� : %d\n", money);

	//4. �Լ� ȣ��
	getChange(money);

	return 0;
}

int getChange(int money)
{
	//1. �Ž����� �ݾ׺��� � �ʿ����� ���� ����
	int fifty = 0, ten = 0, five = 0, one = 0, hundred = 0, tenwon = 0;

	//2. ���
	fifty = money / 50000;
	ten = (money % 50000) / 10000;
	five = (money % 10000) / 5000;
	one = (money % 5000) / 1000;
	hundred = (money % 1000) / 100;
	tenwon = (money % 100) / 10;
	

	//2. �ݾ׺��� � �ʿ����� ���
	printf("50,000���� : %d��\n", fifty);
	printf("10,000���� : %d��\n", ten);
	printf("5,000���� : %d��\n", five);
	printf("1,000���� : %d��\n", one);
	printf("100���� : %d��\n", hundred);
	printf("10���� : %d��\n", tenwon);

	return 0;
}