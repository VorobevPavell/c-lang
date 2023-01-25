/* Убедитесь в том, что выражение getchar() != EOF получает значение 0 или 1 . */

# include <stdio.h>

int main()
{

    int c;

    while (c = getchar() != EOF)

        if (c == 1)
            printf("%d\n",1);
        if (c == 0)
            printf("%d\n",0);

}