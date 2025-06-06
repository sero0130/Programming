/*
*파일명 ch10-01.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한 LOGIN 구조체를 정의하고 이를 입력받아 저장하고 출력하는 프로그램(패스워드 글자 수 만큼 * 출력)
*작성일 : 20250606
*문제 번호 : 10-01
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
* 구조체명 : login
* 기능 : 아이디와 패스워드를 저장하기 위한 구조체
* 멤버변수 :
* - id : 아이디를 저장하는 문자열
* - password : 패스워드를 저장하는 문자열
*/
struct login{
	char id[20];        // 아이디
	char password[20]; // 패스워드
};

typedef struct login LOGIN;

int assignment1001(void);


int main(void)
{
	assignment1001();

	return 0;
}

/*
* 함수명 : assignment1001
* 기능 : 아이디와 패스워드를 입력받아 저장하고 출력하는 함수
* 반환값 : 0
*/

int assignment1001(void)
{
	LOGIN login;

	// 아이디와 패스워드 입력
	printf("ID : ");
	scanf("%s", login.id);
	printf("Password : ");
	scanf("%s", login.password);

	// 입력된 아이디와 패스워드 출력
	printf("ID : %s\n", login.id);
	printf("Password : ");

	// 패스워드 글자 수 만큼 * 출력
	for (int i = 0; login.password[i] != '\0'; i++) {
		printf("*");
	}
	printf("\n");
	
	return 0;
}


