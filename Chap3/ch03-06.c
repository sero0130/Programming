//202511220 ������
//�Ǽ����� �Է¹ް� ������ �������� ���ϴ� ���α׷�
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void squarecube(void);

int main(void)
{
	squarecube();
	
	return 0;
}

void squarecube(void)
{
	float number = 0.0f;
	printf("�Ǽ�: ");
	scanf("%f", &number);
	printf("����: %e\n ������: %e\n", number * number, number * number * number);

	return;
}