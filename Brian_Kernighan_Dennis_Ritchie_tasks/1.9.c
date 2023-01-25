/* Напишите программу, копирующую символы ввода в выходной поток и заменяющую
стоящие подряд пробелы на один пробел. */


# include <stdio.h>

int main()
{

    int c,point;
    point = 0;


    while ((c = getchar()) != EOF){
        if (c == ' '){
            if (point == 0){
                putchar(c);
                point = 1;
            }
        }
        if (c != ' '){
            point = 0;
            putchar(c);
        }
    }
}