#include <stdio.h> //�ǽ� 7-3 �ִ� �ּڰ� ���

int main(void)
{
	int num[10] = { 0 };
	int i;
	int* pMax = NULL;
	int* pMin = NULL;

	printf("Input: ");
	for (i = 0; i < 10; i++)
	{ //�迭�� �Է¹���
		scanf_s("%d", &num[i]);
	}

	pMax = &num[0]; //pMax, pMin �ʱ�ȭ
	pMin = &num[0];

	for (i = 1; i < 10; i++)
	{ //�迭�� Ž���ϸ� pMax�� pMin�� ���� ����
		if (num[i] < *pMin)
			pMin = &num[i];
		if (num[i] > *pMax)
			pMax = &num[i];
	}

	printf("Max: %d\n", *pMax);
	printf("Min: %d\n", *pMin);

	return 0;
}
