#include <stdio.h> //�ǽ� 7-4 ������ ���� ������ �Է� �޾� 
//7�� �������� �� �������� �ش��ϴ� ������ �迭�� *3�� ���� �����Ѵ�.

int main(void)
{
	int i, input, index = 0;
	int num[7] = { 0 };
	int* pNum = num;

	printf("�ϰ� ���� ���� �Է� : ");
	for (i = 0; i < 7; i++)
		scanf_s("%d", pNum + i);

	for (i = 0; ; i++)
	{
		printf("������ ���� ���� �Է�(-1 : ����): ");
		scanf_s("%d", &input);

		if (input == -1)
			break;

		printf("�Է� ��: %d\t", input);
		index = input % 7; //7�� ���� �������� index�� ����
		printf("index��: %d\n", index);

		*(pNum + index) *= 3; //index��°�� �ش��ϴ� �迭�� ���� *3
	}
	printf("���: ");
	for (i = 0; i < 7; i++)
		printf("%d ", *(pNum + i));

	return 0;
}