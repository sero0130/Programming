/*
*파일명 ch10-03.c
*학번 + 이름 : 202511220 박찬웅
*프로그램 기능 : 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체 정의(각 제품별로 제품명, 가격, 재고를 저장해야함) 및 구조체를 매개변수로 전달받아 제품 정보를 출력하는 print_product 함수 정의
*작성일 : 20250606
*문제 번호 : 10-08
*버전 : v0.1
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
* 구조체명 : product
* 기능 : 제품 정보를 저장하기 위한 구조체
* 멤버변수 :
* - name : 제품명을 저장하는 문자열
* - price : 제품의 가격을 저장하는 정수형 변수
* - stock : 제품의 재고를 저장하는 정수형 변수
*/

typedef struct product
{
	char name[20];  // 제품명
	int price;     // 가격
	int stock;     // 재고
}PRODUCT;

int print_product(void);

int main(void)
{
	print_product();

	return 0;
}

/*
* 함수명 : assignment1003
* 기능 : 제품 정보를 입력받아 출력하는 함수
* 반환값 : 0
*/

int print_product(void)
{
	PRODUCT product;

	// 제품 정보 입력
	printf("제품명 : ");
	scanf("%s", product.name);
	printf("가격 : ");
	scanf("%d", &product.price);
	printf("재고 : ");
	scanf("%d", &product.stock);

	// 제품 정보 출력
	printf("[%s %d원 재고 : %d개]\n", product.name, product.price, product.stock);

	return 0;
}