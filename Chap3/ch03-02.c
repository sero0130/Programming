//202511220 ������
//���簢���� ���ο� ���θ� �Է¹ް� ���̿� �ѷ��� ����ϴ� ���α׷�
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
	int width = 0;
	
	printf("���簢���� ���ο� ������ ���̸� �Է��Ͻÿ�: ");
	scanf("%d %d", &length, &width);
	printf("���簢���� ����: %d\n ���簢���� �ѷ�: %d\n", length * width, (length + width) * 2);
	return;
}