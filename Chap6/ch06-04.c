/*
*파일명 ch06-04.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 함수 작성
*작성일 : 20250523
*문제 번호 : 6-6
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu(void);
int Assignment06(void);

int main(void)
{
	Assignment06();

	return 0;
}

/*
* 함수명 : Assignment06
* 기능 : 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 함수
* 반환값 : 0
*/

int Assignment06(void)
{
	int menu = 0;
	//메뉴 선택
	while (1)
	{
		menu = choose_menu();
		if (menu == 0)
		{
			break;
		}
	}


	return 0;
}

/*
* 함수명 : choose_menu
* 기능 : 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 함수
* 반환값 : 메뉴 번호
*/

int choose_menu(void)
{
	int menu = 0;

	//메뉴 입력
	printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료]");
	scanf("%d", &menu);

	//메뉴 선택
	switch (menu)
	{
	case 1:
		printf("파일 열기\n");
		break;
	case 2:
		printf("파일 저장\n");
		break;
	case 3:
		printf("인쇄\n");
		break;
	case 0:
		break;
	}

	return menu;
}