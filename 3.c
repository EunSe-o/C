#include <stdio.h> //������� ����

int main(void) //main �Լ��� ����
{
	int num, i; //���� ����
	int total, f1, f2;
	int n1 = 1;
	int n2 = 1;

	printf("Input: ");
	scanf_s("%d", &num); //������ ���ڿ� �Է�
	printf("%d %d ", n1, n2);

	total = n1 + n2; //f(3)
	f1 = n1; //f(1)
	f2 = n2; //f(2)
	for (i = 3; i <= num; i++) //for�� ���
	{
		printf("%d ", total); //f(n)�� ���
		f2 = f1; //f(n-2)
		f1 = total; //f(n-1)
		total = f1 + f2; //f(n)
	}
	printf("\n");
	return 0; //0�� ��ȯ
} //main �Լ��� ����