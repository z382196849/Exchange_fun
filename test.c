#include<stdio.h>
#include<windows.h>

void Swap(int* x, int* y)
{
    int tmp = 0;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main()
{
    int i = 0;
    int j = 0;
    printf("请输入i和j的值：\n");
    scanf("%d\n", &i);
    scanf("%d", &j);
    Swap(&i, &j);
    printf("i = %d, j = %d", i, j);
    system("pause");
    return;
}
