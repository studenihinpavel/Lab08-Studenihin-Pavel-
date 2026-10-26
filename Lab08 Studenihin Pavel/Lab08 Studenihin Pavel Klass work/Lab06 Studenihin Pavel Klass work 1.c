#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    int n, m;
    int s = 0;
    int k = 0;
    printf("¬ведите значени€ переменной n: \n");
    scanf_s("%d", &n);
    printf("¬ведите значени€ переменной m: \n");
    scanf_s("%d", &m);
    for (int i = n; i <= m; i++) 
    {
        s += i;
        k++;
    }  
    printf("выполнено %d раз\n", k);
    printf("результат %d", s); 
    return 0;
}