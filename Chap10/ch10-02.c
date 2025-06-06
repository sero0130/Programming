/*
*파일명 ch10-02.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : LOGIN 구조체 배열을 이용해서 아이디를 입력받아 LOGIN 구조체 배열에서 찾고 입력받은 패스워드와 등록된 패스워드를 비교해서 같다면 로그인 성공을 출력하는 프로그램
*작성일 : 20250606
*문제 번호 : 10-03
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
* 구조체명 : login
* 기능 : 아이디와 패스워드를 저장하기 위한 구조체
* 멤버변수 :
* - id : 아이디를 저장하는 문자열
* - password : 패스워드를 저장하는 문자열
*/

typedef struct login
{
	char id[20];        // 아이디
	char password[20]; // 패스워드
} LOGIN;

int assignment1002(void);

int main(void)
{
	assignment1002();

	return 0;
}

/*
* 함수명 : assignment1002
* 기능 : 아이디와 패스워드를 입력받아 LOGIN 구조체 배열에서 찾고 입력받은 패스워드와 등록된 패스워드를 비교해서 같다면 로그인 성공을 출력하는 함수
* 반환값 : 0
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

	// 아이디와 패스워드 입력
	printf("ID : ");
	scanf("%s", inputId);
	printf("Password : ");
	scanf("%s", inputPassword);

	// 입력된 아이디와 패스워드 비교
	for (int i = 0; i < 5; i++)
	{
		if (strcmp(users[i].id, inputId) == 0)
		{
			found = 1; // 아이디 발견
			if (strcmp(users[i].password, inputPassword) == 0)
			{
				printf("로그인 성공\n");
			}
			else
			{
				printf("패스워드가 일치하지 않습니다.\n");
			}
			break; // 아이디를 찾았으므로 반복문 종료
		}
	}

	return 0;
}