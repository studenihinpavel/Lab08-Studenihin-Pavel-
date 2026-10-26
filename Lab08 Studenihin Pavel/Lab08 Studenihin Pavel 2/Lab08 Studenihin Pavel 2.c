#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    double xstart = 2.0;
    double xend = 4.1;
    double x, y, z;
   
    printf("Программа табулирования функции: y = |lg(x)| - (x - 2)^2\n");
    printf("Интервал: [2.0 ; 4.1]\n");
    printf("Введите шаг табуляции: ");
    scanf_s("%lf", &z);
    if (z <= 0)
    {
        printf("Ошибка, число должно быть больше нуля");
        return 1;
        
    }
    printf("-------------------------\n");
    printf("|   x   |   y(x)        |\n");
    printf("-------------------------\n");
    for (x = xstart; x <= xend; x = x + z)
    {
        y = fabs(log10(x)) - pow((x - 2), 2);
        printf("|%.1lf, %.6lf|\n", x, y);
    }
    printf("-------------------------\n");
    system("pause");
}