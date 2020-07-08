#include <stdio.h>

int Diamond(ch, h)
{
	int i, j = 0;
	for (i = 0; i < h / 2 + 1; i++)
	{ // (h/2)+1줄 까지의 출력
		for (j = 0; j < h / 2 - i; j++)
			printf(" ");
		for (j = 0; j < 2 * i + 1; j++)
			printf("%c", ch);
		printf("\n");
	}
	for (i = 1; i <= h / 2; i++)
	{ // 나머지 줄의 출력
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

	printf("문자 입력: ");
	scanf_s("%c", &ch);
	printf("높이 입력: ");
	// 이때, 높이는 3~11까지의 홀수를 입력한다.
	scanf_s("%d", &h);
	Diamond(ch, h);

	return 0;
}