//202511220 ������
//������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷�
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void potentialenergy(void);

int main(void)
{
	potentialenergy();

	return 0;
}

void potentialenergy(void)
{
	int mass = 0;
	int height = 0;
	float potential_energy = 0.0f;
	printf("��ü�� ����(kg)�� ����(m)�� �Է��Ͻÿ�: ");
	scanf("%d %d", &mass, &height);
	potential_energy = mass * height * 9.8f;
	printf("��ü�� ��ġ ������: %f J\n", potential_energy);

	return;
}