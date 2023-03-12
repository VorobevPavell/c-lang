/*
Напишите версию функции squeeze(s1, s2), которая удаляет из s1 все символы, встречающиеся в строке s2.
*/
#include <stdio.h>
#define MAXLEN 100

void msqueeze(char s1[], char s2[])
{
    int i,j,k;
    for(i = k = 0; s1[i] != '\0'; ++i)
    {
        for(j = 0; s2[j] != '\0' && s2[j] != s1[i]; ++j)
            ;
        if(s2[j] == '\0')
            s1[k++] = s1[i];
    }
    
    s1[k] = '\0';
}

int main()
{
    char s1[MAXLEN] = {'h','e','l','l','o','\0'};
    char s2[MAXLEN] = {'e','l','\0'};
    msqueeze(s1,s2);
    printf("%s",s1);
    return 0;
}
