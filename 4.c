#include <stdio.h>

int Diamond(ch, h)
{
	int i, j = 0;
	for (i = 0; i < h / 2 + 1; i++)
	{ // (h/2)+1�� ������ ���
		for (j = 0; j < h / 2 - i; j++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("%c", ch);
		printf("\n");
	}
	for (i = 1; i <= h / 2; i++)
	{ // ������ ���� ���
		for (j = 0; j < i; j++)
			printf(" ");
		for (j = 0; j < h - i * 2; j++)
			printf("%c", ch);
		printf("\n");
	}
}
int main(void)
{
	int h = 0;
	char ch;

	printf("���� �Է�: ");
	scanf_s("%c", &ch);
	printf("���� �Է�: ");
	// �̶�, ���̴� 3~11������ Ȧ���� �Է��Ѵ�.
	scanf_s("%d", &h);
	Diamond(ch, h);

	return 0;
}