//202511220 박찬웅
//번호와 학점을 입력받고 출력하는 프로그램
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
	printf("번호?");
	scanf("%d", &num);
	printf("학점?");
	scanf("%f", &score);
	printf("%d번 학생의 학점은 %f입니다.", num, score);


	return;
}