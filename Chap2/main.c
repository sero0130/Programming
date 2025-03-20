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
	char name[64];		//이름 저장할 변수
	int age;						//나이 저장할 변수
	char hello[256];		//인사말 저장할 변수
	
	//1. 이름, 나이, 인사말을 입력 받는다.
	printf("이름, 나이, 인사말을 입력해주세요:\n");
	scanf("%s %d %s", name, &age, hello);
	//2. 이름, 나이, 인사말을 출력한다.
	printf("이름: %s \n나이: %d \n인사말: %s\n", name, age, hello);


	return;
}