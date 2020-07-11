#include <stdio.h> //실습 7-3 최대 최솟값 출력

int main(void)
{
	int num[10] = { 0 };
	int i;
	int* pMax = NULL;
	int* pMin = NULL;

	printf("Input: ");
	for (i = 0; i < 10; i++)
	{ //배열을 입력받음
		scanf_s("%d", &num[i]);
	}

	pMax = &num[0]; //pMax, pMin 초기화
	pMin = &num[0];

	for (i = 1; i < 10; i++)
	{ //배열을 탐색하며 pMax와 pMin에 숫자 저장
		if (num[i] < *pMin)
			pMin = &num[i];
		if (num[i] > *pMax)
			pMax = &num[i];
	}

	printf("Max: %d\n", *pMax);
	printf("Min: %d\n", *pMin);

	return 0;
}
