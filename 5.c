#include <stdio.h> //�Ľ�Į�� �ﰢ��

int main(void)
{
	int i,j, num = 0;
	int arr[14][14] = { 0 };

	printf("Input: ");
	scanf_s("%d", &num); //���ڴ� �ִ� 13������ ���

	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num-(i+1); j++)
			printf("   ");

		for (j = 0; j <= i; j++)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
			if (j == 0 || j == i)
				arr[i][j] = 1;
			printf("%-6d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}