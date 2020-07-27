#include <stdio.h> //실습 7-8 임의의 두 집합에 대해 여집합을 출력한다.

int check_element(int arrU[], int arrA[], int arrB[])
{
	int i, j;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arrU[j] == arrA[i]) //A의 원소가 있을 경우
				break;
			if (j == 9)
			{ //A의 원소가 없을 경우
				printf("\n잘못된 집합 관계에 있습니다.\n프로그램을 종료합니다.\n");
				return 0;
			}
		}
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arrU[j] == arrB[i]) //B의 원소가 있을 경우
				break;
			if (j == 9)
			{ //B의 원소가 없을 경우
				printf("\n잘못된 집합 관계에 있습니다.\n프로그램을 종료합니다.\n");
				return 0;
			}
		}
	}
	return 1;
}

int complement_set(int arrU[], int arrA[], int arrB[], int result[])
{
	int i, j;
	int temp[6] = { 0 };

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (arrA[i] == arrB[j]) //A와 B의 교집합
			{
				temp[i] = arrA[i];
				break;
			}
		}
	}

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 6; j++)
		{
			if (arrU[i] == temp[j])
				break;
			if (j == 5) //A와 B의 여집합
				result[i] = arrU[i];
		}
	}

	printf("\n(A∩B)^c ={");
	for (i = 0; i < 10; i++) //여집합 출력
	{
		if (result[i] == 0)
			continue;
		printf(" %d ", result[i]);
	}
	printf("}\n");
}

int main(void)
{
	int arrU[10], arrA[6], arrB[6];
	int result[10] = { 0 };
	int i, j;

	printf("전체 집합 U 입력 : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &arrU[i]);

	printf("전체 집합 A 입력 : ");
	for (i = 0; i < 6; i++)
		scanf_s("%d", &arrA[i]);

	printf("전체 집합 B 입력 : ");
	for (i = 0; i < 6; i++)
		scanf_s("%d", &arrB[i]);

	if (check_element(arrU, arrA, arrB) == 0)
		return 0; //원소 A와 B가 전체집합의 부분집합이 아닐 경우 종료
	else
	{ //여집합 출력
		printf("\n");
		complement_set(arrU, arrA, arrB, result);
	}
	return 0;
}