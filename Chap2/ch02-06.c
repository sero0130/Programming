//202511220 ������
//16���� ������ �Է¹ް� 10������ ����ϴ� ���α׷�
//2025.03.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void printdecimal(void);

int main(void)
{
	printdecimal();

	return 0;
}

void printdecimal(void)
{
	int num;
	printf("16���� ����?");
	scanf("%x", &num);
	printf("16���� %x�� 10������ %d�Դϴ�.", num, num);

	return;
}