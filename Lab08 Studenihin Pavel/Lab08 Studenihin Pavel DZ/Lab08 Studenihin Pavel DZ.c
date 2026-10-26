#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    double x, y = 0;
    for (int i = 10; i <= 20; i++) {
        x = i / 10.0;
        y = y + sin(x);
    }
    printf("Сумма равна: %lf\n", y);
    system("pause");
}