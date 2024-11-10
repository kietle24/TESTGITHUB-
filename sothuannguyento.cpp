#include <stdio.h>
#include <stdbool.h>
bool isprime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
void sapxeptangdan(int a[], int n)
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
    int min, max, chan, le, a[100], tong;
    int tongmax = 0;
    int j, k;
    printf("\nnhap so phan tu mang :");
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
    tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong = tong + a[i];
    }
    printf("\ntong cac phan tu la : %d", tong);
    max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
    }
    printf("\nPhan tu lon nhat trong mang: %d", max);
    //
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
    }
    printf("\nPhan tu nho nhat trong mang: %d", min);
    printf("\nphan tu chan trong mang ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("\t%d", a[i]);
        }
    }
    printf("\nphan tu le trong mang");
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            printf("\t%d", a[i]);
        }
    }
    printf("\nsonguyentotrongmang ");
    for (int i = 0; i < n; i++)
    {
        if (isprime(a[i]))
        {
            printf("\t%d", a[i]);
        }
    }
    sapxeptangdan(a, n);
    printf("\tmang sau khi duoc sap xep tang dan:");
    for (int i = 0; i < n; i++)
    {
        printf("\t%d", a[i]);
    }
    printf("\nvi tri can xoa:");
    if (k >= 0 && k < n)
    {
        for (int i = k; i < n - 1; i++)
        {
            a[i] = a[i + 1];
            n--;
        }
        else
        {
            printf("\nvi tri nhap khong hop le vui long nhap lai:");
        }
    }

    return 0;
}
