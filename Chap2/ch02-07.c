//202511220 ������
//8����, 10����, 16���� �� �ϳ� �Է¹޾� ���� �󸶿� �ش��ϴ��� ����ϴ� ���α׷�
//2025.03.20

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void checktype(void);

int main(void)
{
	checktype();

	return 0;
}

void checktype(void)
{
	int num;
	printf("8������ �Է��Ϸ��� 012, 16������ �Է��Ϸ��� 0x12ó�� �Է��ϼ���.\n");
	printf("����?");
	scanf("%i", &num);
	printf("8����: 0%o\n", num);
	printf("10����: %d\n", num);
	printf("16����: %x\n", num);

	return;
}
