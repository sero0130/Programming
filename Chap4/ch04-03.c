/*
*���ϸ� ch0403
*�й� + �̸� : 202511220 ������
*���α׷� ��� : �������� ������ �Է¹޾� ���� ���Ǹ� ���ϴ� ���α׷�
*�ۼ��� : 20250414
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0403(void);
double getVolume(double r);

int main(void)
{
	assignment0403();

	return 0;
}
/*
* �Լ��̸�: assignment0403
* ���: ������ �Է�, ���� ���� ��� �Լ� ȣ��, ���� ���� ���
* ��ȯ�� : 0 ��ȯ
*/

int assignment0403(void)
{
	//1. ������ ���� ����
	double radius = 0.0, volume = 0.0;
	//2. ������ �Է¹ޱ�
	scanf("%lf", &radius);
	//3. �Լ� ȣ�� �� ���ǰ� ����
	volume = getVolume(radius);
	//4. ���
	printf("%.lf", volume);

	//5. �Լ� ����
	return 0;
}

/*
* �Լ� �̸� : getVolume
* ��� : ������ �Է¹޾� ���� ���� ���
* ��ȯ�� : ���� ���� ��ȯ
*/

double getVolume(double r)
{
	//1. ���� ���� ���� ����, ���� ���� ����
	double volume = 0.0;
	double pi = 3.141592;
	//2. ���� ���� ���
	volume = 4.0 / 3.0 * pi * (r * r * r);
	//3. ��갪 ��ȯ
	return volume;
}