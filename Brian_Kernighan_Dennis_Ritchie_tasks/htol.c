/*
Напишите функцию htol(s), которая преобразует последовательность
шестнадцатеричных цифр, начинающуюся с 0х или 0Х, в соответствующее целое. Шестнадцатеричными
цифрами являются символы 0…9, а…f, А…F.
*/
#include <stdio.h>
enum {NO, YES};
#define MAXSSIZE 2
int htol(char s[])
{
    int i = 0, n = 0;
    int inhex = YES;
    int hexdigit;
    if(s[i] == '0')
    {
        ++i;
        if(s[i] == 'x' || s[i] == 'X')
            ++i;
    }
    for(; inhex == YES; ++i)
    {
        if(s[i] >= '0' && s[i] <= '9')
            hexdigit = s[i] - '0';
        else if(s[i] >= 'a' && s[i] <= 'f')
            hexdigit = s[i] - 'a' + 10;
        else if(s[i] >= 'A' && s[i] <= 'F')
            hexdigit = s[i] - 'A' + 10;
        else
            inhex = NO;
        if(inhex == YES)
            n = 16 * n + hexdigit;
    }
    
    return n;
}

int main()
{
    int res;
    char s[MAXSSIZE];
    for(int i = 0; i < MAXSSIZE;i++)
        scanf("%c",&s[i]);
    
    res = htol(s);
    
    printf("%d",res);

    return 0;
}
