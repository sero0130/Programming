/*
*���ϸ� ch06-01.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���ο� ���θ� �Ű������� ���޹޾� �ѷ� ���ϴ� �Լ� �ۼ�
*�ۼ��� : 20250523
*���� ��ȣ : 6-1
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int getperimeter(int width, int height);
int Assignment01(void);

int main(void)
{
	//�Լ� ȣ��
	Assignment01();

	return 0;
}

/*
* �Լ��� : Assignment01
* ��� : ���ο� ���θ� �Է¹޾� �Լ��� ���� �� ���
* ��ȯ�� : 0
*/

int Assignment01(void)
{
	int width = 0, height = 0;
	int result = 0;

	//���� ���� �Է�
	printf("���ο� ���θ� �Է� : ");
	scanf("%d %d", &width, &height);

	//�Լ� ȣ��
	result = getperimeter(width, height);

	//��� ���
	printf("�ѷ� : %d\n", result);

	return 0;
}

/*
* �Լ��� : getperimeter
* ��� : ���ο� ���θ� �Ű������� ���޹޾� �ѷ��� ���ϴ� �Լ�
* ��ȯ�� : �ѷ�
*/

int getperimeter(int width, int height)
{
	//�ѷ� ���ϱ�
	int perimeter = 0;
	perimeter = (width + height) * 2;

	return perimeter;
}
