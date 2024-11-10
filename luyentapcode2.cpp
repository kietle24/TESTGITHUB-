#include <stdio.h>
#include <stdbool.h>
bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
void sapXepTangDan(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        int temp = a[min_idx];
        a[min_idx] = a[i];
        a[i] = temp;
    }
}
int main()
{
    int n;
    int a[100], tong, max, min, chan, le;
    int tongMax = 0;
    int k;
    int j;

    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Nhap so diem %d (0-10): ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("\nXuat mang vua nhap:");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    //
    tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong = tong + a[i];
    }
    printf("\nTong cac phan tu cua mang la: %d", tong);

    max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("\nPhan tu lon nhat trong mang: %d", max);
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    printf("\nPhan tu nho nhat trong mang: %d", min);

    printf("\nPhan tu chan trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("\t%d", a[i]);
        }
    }

    printf("\nPhan tu le trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("\t%d", a[i]);
        }
    }

    printf("\nSo nguyen to trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]))
        {
            printf("\t%d", a[i]);
        }
    }
    sapXepTangDan(a, n);

    printf("\nMang sau khi sap xep tang dan:");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }

    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &k);

    if (k >= 0 && k < n)
    {
        for (int i = k; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
    }
    else
    {
        printf("\nVi tri xoa khong hop le!\n");
    }

    printf("\nMang sau khi xoa phan tu tai vi tri %d:", k);
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    return 0;
}