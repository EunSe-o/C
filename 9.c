#include <stdio.h> //�ǽ� 7-6 �Է¹��� ���� ���

int i = 0;
int get_array(int arr[], int n)
{ //���� �Է¹ޱ�
    printf("%d���� ������ �Է��Ͻÿ�.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int prt_array(int arr[], int m)
{ //���� ����ϱ�
    printf("��� �� ���: ");
    for (i = 0; i < m; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(void)
{
    int arr[5];

    get_array(arr, 5);
    prt_array(arr, 5);
    return 0;
}