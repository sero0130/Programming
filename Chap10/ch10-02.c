/*
*���ϸ� ch10-02.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : LOGIN ����ü �迭�� �̿��ؼ� ���̵� �Է¹޾� LOGIN ����ü �迭���� ã�� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ���ٸ� �α��� ������ ����ϴ� ���α׷�
*�ۼ��� : 20250606
*���� ��ȣ : 10-03
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
* ����ü�� : login
* ��� : ���̵�� �н����带 �����ϱ� ���� ����ü
* ������� :
* - id : ���̵� �����ϴ� ���ڿ�
* - password : �н����带 �����ϴ� ���ڿ�
*/

typedef struct login
{
	char id[20];        // ���̵�
	char password[20]; // �н�����
} LOGIN;

int assignment1002(void);

int main(void)
{
	assignment1002();

	return 0;
}

/*
* �Լ��� : assignment1002
* ��� : ���̵�� �н����带 �Է¹޾� LOGIN ����ü �迭���� ã�� �Է¹��� �н������ ��ϵ� �н����带 ���ؼ� ���ٸ� �α��� ������ ����ϴ� �Լ�
* ��ȯ�� : 0
*/

int assignment1002(void)
{
	LOGIN users[5] = {
		{"user1", "pass1"},
		{"user2", "pass2"},
		{"user3", "pass3"},
		{"user4", "pass4"},
		{"user5", "pass5"}
	};

	char inputId[20];
	char inputPassword[20];
	int found = 0;

	// ���̵�� �н����� �Է�
	printf("ID : ");
	scanf("%s", inputId);
	printf("Password : ");
	scanf("%s", inputPassword);

	// �Էµ� ���̵�� �н����� ��
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(users[i].id, inputId) == 0)
		{
			found = 1; // ���̵� �߰�
			if (strcmp(users[i].password, inputPassword) == 0)
			{
				printf("�α��� ����\n");
			}
			else
			{
				printf("�н����尡 ��ġ���� �ʽ��ϴ�.\n");
			}
			break; // ���̵� ã�����Ƿ� �ݺ��� ����
		}
	}

	return 0;
}