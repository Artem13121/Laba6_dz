# Домашнее задание к работе 4
### Условие:
Дано число N (N<1000). Написать программу, которая проверяет является ли произведение его цифр трёхзначным числом.
### Блок-схема:
<img width="286" height="700" alt="image" src="https://github.com/user-attachments/assets/9efc7c89-0593-4949-a7f2-25fb34243f10" />


### программа



#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Rus");
    int a, b, c, n;
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
