#include <stdio.h>

int main()
{
    int a = 5;
    int d = 5;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= d; j++)
        {
            printf("%c", '$');
        }
        printf("\n");
    }
    return 0;
}