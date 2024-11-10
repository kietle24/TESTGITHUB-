#include <stdio.h>
int main()
{
    int a, b, c;
    printf("nhap a: ");
    scanf("%d", &a);
    printf("nhap b: ");
    scanf("%d", &b);
    printf("nhap c: ");
    scanf("%d", &c);
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    printf("so lon nhat trong 3 : %d", max);
    return 0;
}