#include <stdio.h> //실습 7-6 입력받은 정수 출력

int i = 0;
int get_array(int arr[], int n)
{ //정수 입력받기
    printf("%d개의 정수를 입력하시오.\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
}

int prt_array(int arr[], int m)
{ //정수 출력하기
    printf("모든 수 출력: ");
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