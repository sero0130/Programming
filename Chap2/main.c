#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void introMe(void);

int main(void)
{
	introMe();


	return 0;
}

void introMe(void)
{
	char name[64];		//�̸� ������ ����
	int age;						//���� ������ ����
	char hello[256];		//�λ縻 ������ ����
	
	//1. �̸�, ����, �λ縻�� �Է� �޴´�.
	printf("�̸�, ����, �λ縻�� �Է����ּ���:\n");
	scanf("%s %d %s", name, &age, hello);
	//2. �̸�, ����, �λ縻�� ����Ѵ�.
	printf("�̸�: %s \n����: %d \n�λ縻: %s\n", name, age, hello);


	return;
}