//202511220 ������
//��ü�� �� ���� ũ��� ���� �������� �̵��� �Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷�
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void workdone(void);

int main(void)
{
	workdone();

	return 0;
}

void workdone(void)
{
	int force = 0;
	int distance = 0;
	float work = 0.0f;
	printf("���� ũ��(N), �̵��� �Ÿ�(m): ");
	scanf("%d %d", &force, &distance);
	work = force * distance;
	printf("�� ���� ��: %.2f J\n", work);

	return;
}