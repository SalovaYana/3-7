#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()

{
    setlocale(LC_ALL,"Rus");

    int x;
    printf("������� �����:  ");
    scanf_s("%d", &x);
    int i=0;
    while (x != 0)
     {
        x = x & (x - 1);
        i++;
     }

    printf("\n���������� ������ � �������� ������ = %d", i);
    return 0;
}
