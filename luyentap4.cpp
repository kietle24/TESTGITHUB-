#include <stdio.h>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// sap xep chon
void sapxeptangdan(int x[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int vitrinhonhat = i;
        for (int j = i + 1; j < n; j++)
        {
            if (x[j] < x[vitrinhonhat])
                vitrinhonhat = j;
        }
        swap(x[i], x[vitrinhonhat]);
    }
}
void sapxepgiamdan(int x[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int vitrilonnhat = i;
        for (int j = i + 1; j < n; j++)
        {
            if (x[j] > x[vitrilonnhat])
                vitrinhonhat = j;
        }
        swap(x[i], x[vitrilonnhat]);
    }
}

void printmang(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    printf("\n");
}

int main()
{
    int a[100], n;
    do
    {
        printf("Nhap so luong phan tu (0 < n <= 100): ");
        scanf("%d", &n);
        if (n < 1 || n > 100)
        {
            printf("So luong phan tu khong hop le. Vui long nhap lai!\n");
        }
    } while (n < 1 || n > 100);

    for (int i = 0; i < n; i++)
    {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("\nMang tang dan: ");
    printf("\nMang giam dan: ");
    sapxeptangdan(a, n);
    printmang(a, n);

    return 0;
}
