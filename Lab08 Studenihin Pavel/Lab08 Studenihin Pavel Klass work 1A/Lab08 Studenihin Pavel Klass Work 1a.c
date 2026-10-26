#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int i, n;
    printf("¬ведите значение n =  ");
    scanf_s("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", (int)pow(2, i));
    }
        
    system("pause");
    return 0;
}