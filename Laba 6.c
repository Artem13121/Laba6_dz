#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Rus");
    int n;
    scanf("%d", &n);

    int a = n / 100;
    int b = n / 10 % 10;
    int c = n % 10;

    if (a == 0) a = 1;
    if (b == 0) b = 1;

    int p = a * b * c;

    if (p > 99 && p < 1000)
        printf("Да");
    else
        printf("Нет");

    return 0;
}