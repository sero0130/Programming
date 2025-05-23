/*
*���ϸ� ch06-05.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : RGB ���� ����� �����ϴ� �Լ� ���� �� RGB ������ ������ ���ؼ� ����ϴ� ���α׷� �ۼ�
*�ۼ��� : 20250523
*���� ��ȣ : 6-9
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int make_rgb(int r, int g, int b);
int get_red(int rgb);
int get_green(int rgb);
int get_blue(int rgb);
int Assignment09(void);

int main(void)
{
	Assignment09();

	return 0;
}

int Assignment09(void)
{
	int r = 0, g = 0, b = 0;
	int rgb = 0;
	int rrgb = 0;
	
	//RGB ���� �Է�
	printf("RGB ���� �Է� : ");
	scanf("%i", &rgb);

	//RGB ���󿡼� ������, �ʷϻ�, �Ķ��� ����
	r = get_red(rgb);
	g = get_green(rgb);
	b = get_blue(rgb);

	//RGB ���󿡼� ���� ����
	r = 255 - r;
	g = 255 - g;
	b = 255 - b;

	rrgb = make_rgb(r, g, b);

	//���� ���
	printf("RGB %X�� ���� : %06X\n",rgb, rrgb);


	return 0;
}

int make_rgb(int r, int g, int b)
{
	int rgb = 0;

	//�Է¹��� RGB �����
	rgb = (r << 16) | (g << 8) | b;


	//RGB ���� ����
	return rgb;
}

int get_red(int rgb)
{
	int red = 0;
	//RGB ���󿡼� ������ ����
	red = (rgb >> 16) & 0xFF;
	
	//������ ����
	return red;
}

int get_green(int rgb)
{
	int green = 0;
	
	//RGB ���󿡼� �ʷϻ� ����
	green = (rgb >> 8) & 0xFF;
	
	//�ʷϻ� ����
	return green;
}

int get_blue(int rgb)
{
	int blue = 0;

	//RGB ���󿡼� �Ķ��� ����
	blue = rgb & 0xFF;

	//�Ķ��� ����
	return blue;
}