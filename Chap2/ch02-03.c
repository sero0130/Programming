//202511220 ������
//��ȣ�� ������ �Է¹ް� ����ϴ� ���α׷�
//2025.03.20


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void printscore(void);

int main(void)
{
	printscore();


	return 0;
}

void printscore(void)
{
	int num;
	float score;
	printf("��ȣ?");
	scanf("%d", &num);
	printf("����?");
	scanf("%f", &score);
	printf("%d�� �л��� ������ %f�Դϴ�.", num, score);


	return;
}