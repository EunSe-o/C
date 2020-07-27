#include <stdio.h> //�ǽ� 7-8 ������ �� ���տ� ���� �������� ����Ѵ�.

int check_element(int arrU[], int arrA[], int arrB[])
{
	int i, j;

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arrU[j] == arrA[i]) //A�� ���Ұ� ���� ���
				break;
			if (j == 9)
			{ //A�� ���Ұ� ���� ���
				printf("\n�߸��� ���� ���迡 �ֽ��ϴ�.\n���α׷��� �����մϴ�.\n");
				return 0;
			}
		}
	}

	for (i = 0; i < 6; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (arrU[j] == arrB[i]) //B�� ���Ұ� ���� ���
				break;
			if (j == 9)
			{ //B�� ���Ұ� ���� ���
				printf("\n�߸��� ���� ���迡 �ֽ��ϴ�.\n���α׷��� �����մϴ�.\n");
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
			if (arrA[i] == arrB[j]) //A�� B�� ������
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
			if (j == 5) //A�� B�� ������
				result[i] = arrU[i];
		}
	}

	printf("\n(A��B)^c ={");
	for (i = 0; i < 10; i++) //������ ���
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

	printf("��ü ���� U �Է� : ");
	for (i = 0; i < 10; i++)
		scanf_s("%d", &arrU[i]);

	printf("��ü ���� A �Է� : ");
	for (i = 0; i < 6; i++)
		scanf_s("%d", &arrA[i]);

	printf("��ü ���� B �Է� : ");
	for (i = 0; i < 6; i++)
		scanf_s("%d", &arrB[i]);

	if (check_element(arrU, arrA, arrB) == 0)
		return 0; //���� A�� B�� ��ü������ �κ������� �ƴ� ��� ����
	else
	{ //������ ���
		printf("\n");
		complement_set(arrU, arrA, arrB, result);
	}
	return 0;
}