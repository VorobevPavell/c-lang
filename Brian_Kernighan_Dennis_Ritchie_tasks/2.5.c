/*
Напишите функцию any(s1, s2), которая возвращает либо ту позицию в s1,
где стоит первый символ, совпавший с любым из символов в s2, либо -1 (если ни один символ из s1 не совпадает с символами из s2).
*/
#include <stdio.h>
#define SIZE 100

int my_any(char s1[], char s2[])
{
    int i,j;
    
    for(i = 0; s1[i] != '\0'; ++i)
    {
        for(j = 0; s2[j] != '\0'; ++j)
            if(s1[i] == s2[j])
                return i;
    }
    return -1;
}

int main()
{
    int res;
    char s1[SIZE] = {'a','l','c','b','o','\0'};
    char s2[SIZE] = {'b','b','b','b','b','\0'};
    res = my_any(s1,s2);
    printf("%d",res);
    return 0;
}
