#include <stdio.h>

int main(void)
{
	int i, j, num = 0;

	printf("Input: ");
	scanf_s("%d", &num); //���ڸ� �Է¹���

	for (i = 0; i < num; i++)
	{
		if (i % 2 == 0) //Ȧ�� ���϶�
		{
			for (j = num * i + 1; j <= num * (i + 1); j++)
				printf("%3d", j); //������ ���
		}
		if (i % 2 != 0) //¦�� ���϶�
		{
			for (j = num * (i + 1); j >= num * i + 1; j--)
				printf("%3d", j); //������ ���
		}
		printf("\n");
	}
	return 0;
}