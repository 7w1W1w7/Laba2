
#include <stdio.h>

int main()
{
    int N, control = 0;
    char arr[1000];
    char a;
    int i = 0, j;
    printf("Input a string:\n");
    while ((a = getchar()) != '\n')
    {
        arr[i] = a;
        i++;
    }
    arr[i] = '\0';
    printf("Input a word size:\n");
    scanf_s("%d", &N);
    i = 0;
    while (1)
    {
        int m = 0;
        while ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z'))
        {

            i++;
            m++;
        }
        if (m == N)
        {

            for (j = i - m; j < i; j++)
            {
                printf("%c", arr[j]);
            }
            printf(" ");
        }
        while (!((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')))
        {
            if (arr[i] == '\0')
            {
                control = 1;
                break;
            }
            i++;
        }
        if (control == 1)
            break;
    }
    return 0;
}
