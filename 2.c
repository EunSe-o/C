#include <stdio.h>

int main(void)
{
	int i, j, num = 0;

	printf("Input: ");
	scanf_s("%d", &num); //숫자를 입력받음

	for (i = 0; i < num; i++)
	{
		if (i % 2 == 0) //홀수 줄일때
		{
			for (j = num * i + 1; j <= num * (i + 1); j++)
				printf("%3d", j); //정방향 출력
		}
		if (i % 2 != 0) //짝수 줄일때
		{
			for (j = num * (i + 1); j >= num * i + 1; j--)
				printf("%3d", j); //역방향 출력
		}
		printf("\n");
	}
	return 0;
}