//202511220 ������
//�Ѻ��� ���̸� �Է¹ް� ���簢���� ���̿� �ѷ��� ����ϴ� ���α׷�
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void areaperimeter(void);

int main(void)
{
	areaperimeter();
	return 0;
}

void areaperimeter(void)
{
	int length = 0;
	printf("���簢���� �Ѻ��� ���̸� �Է��Ͻÿ�: ");
	scanf("%d", &length);
	printf("���簢���� ����: %d\n ���簢���� �ѷ�: %d\n", length * length, length * 4);

	return;
}

