/*
Напишите программу, которая будет в каждой вводимой строке заменять стоящие подряд
символы пробелов и табуляций на один пробел и удалять пустые строки.
*/
#include <stdio.h>
#define MAXLINE 50

int getstr(char line[],int maxline);

int main()
{
    int len,i,j;
    char line[MAXLINE];

    while((len = getstr(line,MAXLINE)) > 0)
    {
        for(i = 0,j = 1; j <= len; ++i,++j)
        {
            if(line[i] == '\t')
            {
                while(line[i] == '\t')
                {
                    i++;
                    j++;
                }
                printf("%c",' ');
            }
            
            if (line[i] == ' ' && line[j] == ' ')
            {
                while(line[j] == ' ')
                {
                    ++i;
                    ++j;
                }
                printf("%c",' ');
                
            }
            else printf("%c",line[i]);
            
        }
    }
    return 0;
}

int getstr(char s[],int lim)
{
    int c,i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
        
    if (c == '\n'){
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}