/*
*���ϸ� ch06-02.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �� �� ������ �����Ÿ��� ���ϴ� �Լ� �ۼ�
*�ۼ��� : 20250523
*���� ��ȣ : 6-3
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);
int Assignment03(void);

int main(void)
{
	//�Լ� ȣ��
	Assignment03();

	return 0;
}


/*
* �Լ��� : Assignment03
* ��� : �� ���� ��ǥ�� �Է¹޾� �Լ��� ���� �� �Ÿ� ���
* ��ȯ�� : 0
*/

int Assignment03(void)
{
	double x1 = 0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
	double result = 0.0;

	//��ǥ �Է�
	printf("���� ��ǥ : ");
	scanf("%lf %lf", &x1, &y1);
	printf("�� ��ǥ : ");
	scanf("%lf %lf", &x2, &y2);

	//�Լ� ȣ��
	result = distance(x1, y1, x2, y2);
	//��� ���
	printf("�� �� ������ �Ÿ� : %lf\n", result);

	return 0;
}

/*
* �Լ��� : distance
* ��� : �� �� ������ �����Ÿ��� ���ϴ� �Լ�
* ��ȯ�� : �Ÿ�
*/

double distance(double x1, double y1, double x2, double y2)
{
	//�� �� ������ �Ÿ� ���ϱ�
	double result = 0.0;
	result = sqrt((pow((x2 - x1), 2) + pow((y2 - y1), 2)));

	return result;
}