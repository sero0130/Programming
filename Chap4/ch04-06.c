/*
*���ϸ� ch0406
*�й� + �̸� : 202511220 ������
*���α׷� ��� : rgb �� �Է¹޾� RGB ������ ���� ����ϴ� ���α׷�
*�ۼ��� : 20250414
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assignment0406(void);
int getRGB(int r, int g, int b);

int main(void)
{
	assignment0406();

	return 0;
}

/*
* �Լ� �̸�: assignment0406
* ��� : RGB �� �Է¹޾� RGB ���� ���
* ��ȯ�� : 0 ��ȯ
*/

int assignment0406(void)
{
	//1. RGB �� ���� ����
	unsigned char r = 0, g = 0, b = 0;
	unsigned int rgb = 0;
	//2. RGB �� �Է¹ޱ�
	printf("red(0~255): ");
	scanf("%hhu", &r);
	printf("green(0~255): ");
	scanf("%hhu", &g);
	printf("blue(0~255): ");
	scanf("%hhu", &b);

	//3. RGB ���� ���
	rgb = getRGB(r, g, b);
	printf("RGB Ʈ���÷� : %06X", rgb);

	return 0;
}

/*
* �Լ� �̸�: getRGB
* ��� : RGB �� �Է¹޾� RGB ���� ���
* ��ȯ��: RGB ���� ��ȯ
*/


int getRGB(int r, int g, int b)
{
	unsigned int rrggbb = 0;
	//1.rgb �� ���
	rrggbb = r | g << 8 | b << 16;

	return rrggbb;
}