/*
*���ϸ� ch10-01.c
*�й� + �̸� : 202511220 ������
*���α׷� ��� : ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ���� LOGIN ����ü�� �����ϰ� �̸� �Է¹޾� �����ϰ� ����ϴ� ���α׷�(�н����� ���� �� ��ŭ * ���)
*�ۼ��� : 20250606
*���� ��ȣ : 10-01
*���� : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
* ����ü�� : login
* ��� : ���̵�� �н����带 �����ϱ� ���� ����ü
* ������� :
* - id : ���̵� �����ϴ� ���ڿ�
* - password : �н����带 �����ϴ� ���ڿ�
*/
struct login{
	char id[20];        // ���̵�
	char password[20]; // �н�����
};

typedef struct login LOGIN;

int assignment1001(void);


int main(void)
{
	assignment1001();

	return 0;
}

/*
* �Լ��� : assignment1001
* ��� : ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� �Լ�
* ��ȯ�� : 0
*/

int assignment1001(void)
{
	LOGIN login;

	// ���̵�� �н����� �Է�
	printf("ID : ");
	scanf("%s", login.id);
	printf("Password : ");
	scanf("%s", login.password);

	// �Էµ� ���̵�� �н����� ���
	printf("ID : %s\n", login.id);
	printf("Password : ");

	// �н����� ���� �� ��ŭ * ���
	for (int i = 0; login.password[i] != '\0'; i++) {
		printf("*");
	}
	printf("\n");
	
	return 0;
}


