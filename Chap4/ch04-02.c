/*
*���ϸ� ch0402
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ȭ���µ��� �Ǽ��� �Է¹޾� �����µ��� ��ȯ�ϴ� ���α׷�
*�ۼ��� : 20250414
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0402(void);
double getCelsius(double f);

int main(void)
{
	assignment0402();

	return 0;
}

/*
* �Լ� �̸�: assignment0402
* ��� : ȭ���µ� �Է�, ���� �µ� ��� ȣ��, �����µ� ���
* ��ȯ�� : 0 ��ȯ
*/

int assignment0402(void)
{
	//1. ȭ���µ� ���� ����
	double fahrenheit = 0.0, celsius = 0.0;
	//2. ȭ���µ� �Է¹ޱ�
	printf("ȭ���µ�: ");
	scanf("%lf", &fahrenheit);
	//3. �Լ� ȣ�� �� �����µ� ����
	celsius = getCelsius(fahrenheit);
	//4. ���
	printf("%.2lf F = %.2lf C", fahrenheit, celsius);
	return 0;
}

/*
* �Լ� �̸� : getCelsius
* ��� : ȭ���µ� �Է¹޾� �����µ��� ��ȯ
* ��ȯ�� : �����µ� ��ȯ
*/

double getCelsius(double f)
{
	//1. �����µ� ���� ����
	double celsius = 0.0;
	//2. �����µ� ���
	celsius = (f - 32.0) * 5.0 / 9.0;
	//3. ��갪 ��ȯ
	return celsius;
}