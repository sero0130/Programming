//202511220 ������
//����Ʈ�� ������ �������ͷ� �Է¹޾� �������� ����ϴ� ���α׷�
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void aptarea(void);

int main(void)
{
	aptarea();

	return 0;
}

void aptarea(void)
{
	float area = 0.0f;
	printf("����Ʈ�� ����(��������)�� �Է��Ͻÿ�: ");
	scanf("%f", &area);
	printf("%.2f �������� = %.2f ��\n", area, area * 0.3025f);

	return;
}