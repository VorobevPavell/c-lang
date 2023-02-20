/*
Функция lower, которая одиночный символ из набора
ASCII, если он является заглавной буквой, превращает в строчную. Если же символ не является заглавной
буквой, lower его не изменяет
*/
#include <stdio.h>

int my_lower(int c);
int main()
{
    putchar(my_lower('A'));
    getchar();
    for(char c = 'A'; c <= 'Z'; ++c)
        printf("%d\t%c\n",c, c);
}

int my_lower(int c)
{
    if(c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else return c;
}
