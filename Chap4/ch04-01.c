/*
*���ϸ� ch0401
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ������ �ӷ��� �Ǽ��� �Է¹޾� ��������� ���ϴ� ���α׷�
*�ۼ��� : 20250409
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0401(void);
double getMovingEnergy(double m, double v);

int main(void)
{
	assignment0401();

	return 0;
}

/*
�Լ� �̸� : assignment0401
�Լ� ��� : ���� �Է�, �ӷ� �Է�, ������� ��� �Լ� ȣ��, ������� ���
��ȯ�� :  0��ȯ
*/

int assignment0401(void)
{
	//1. ���� ����
	double mass = 0.0, velocity = 0.0, energy = 0.0;
	//2. ����, �ӷ� �Է¹ޱ�
	scanf("%lf %lf", &mass, &velocity);
	//3. �Լ� ȣ��
	energy = getMovingEnergy(mass, velocity);
	//4. ���
	printf(".2lf", energy);


	return 0;
}


/*
�Լ� �̸� : getMovingEnergy
�Լ� ��� : ����, �ӷ� �Է¹޾� ������� ���
��ȯ�� : ������� ��ȯ
*/

double getMovingEnergy(double m, double v)
{
	//1. ������� ���� ����
	double energy = 0.0;
	//2. ������� ���
	energy = 1.0 / 2.0 * m * v * v;
	//3.��갪 ��ȯ
	return energy;
}