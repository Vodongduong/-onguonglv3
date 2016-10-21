// Nh?p vào t? bàn phím n s? nguyên, tìm và in ra màn hình s? nguyên l?n nh?t và s? nguyên nh? nh?t

#include <stdio.h>
#include <conio.h>
int main ()
{
int a[100];
int n;
printf ("\nNhap so phan tu cua day : ");
scanf ("%d", n);
int i;
for (i=0; i<n; i++)
{
    printf ("\nNhap gia tri cua so hang thu %d", i);
    scanf ("%d", &a[i]);
}
printf ("\nDay so ban vua nhap la :");
for (i=0; i<n; i++)
    printf ("%d ", a[i]);
   int Max = a[0];
    if (a[i]>Max)
        Max = a[i];
    printf ("\nGia tri lon nhap la %d", Max);
    return 0;
}
