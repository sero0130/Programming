//202511220 ������
//��/�޷� ȯ���� �޷��� �Է¹޾� ������� ����ϴ� ���α׷�
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void dollarwon(void);

int main(void)
{
	dollarwon();
	
	return 0;
}

void dollarwon(void)
{
	float dollar = 0.0f;
	float exchange_rate = 0.0f;
	printf("USD: ");
	scanf("%f", &dollar);
	printf("��/�޷� ȯ��: ");
	scanf("%f", &exchange_rate);
	printf("KRW: %.2f = USD: %.2f\n", dollar * exchange_rate, dollar);

	return;
}