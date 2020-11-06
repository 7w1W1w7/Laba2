
#include <locale.h>
# include <stdio.h> 
#include <iostream>
int main()
{

    setlocale(LC_ALL, "Rus");
    char a[];
    char c;
    int v = 0;
    int f = 0;
    int dlina = 0;
    int sch = 0;
    int g = 0;
    printf("Введите строку\n");
    while ((c = getchar()) != '\n')
    {
        a[v] = c;
        v++;
    }
    a[v] = '\0';
    printf("Введите длину слова\n");
    scanf_s("%d", &dlina);
    for (int i = 0; i <= v; i++)
    {


        if (a[i] == ' ' || a[i] == '\0' || a[i] == '\t')
        {


            if ((i - sch) == dlina)
            {

                for (f = sch; f <= i; f++)
                    putchar(a[f]);
            }
            sch = i + 1;
        }

        puts([f]);
        


    };

    return 0;
}

