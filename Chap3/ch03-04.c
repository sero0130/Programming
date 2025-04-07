//202511220 박찬웅
//물체에 한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램
//2025.04.07

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void workdone(void);

int main(void)
{
	workdone();

	return 0;
}

void workdone(void)
{
	int force = 0;
	int distance = 0;
	float work = 0.0f;
	printf("힘의 크기(N), 이동한 거리(m): ");
	scanf("%d %d", &force, &distance);
	work = force * distance;
	printf("한 일의 양: %.2f J\n", work);

	return;
}