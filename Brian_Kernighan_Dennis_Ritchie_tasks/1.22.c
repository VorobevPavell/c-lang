/*
Напишите программу, печатающую символы входного потока так, чтобы строки текста не
выходили правее n-й позиции. Это значит, что каждая строка, длина которой превышает n, должна печататься
с переносом на следующие строки. Место переноса следует "искать" после последнего символа, отличного от
символа-разделителя, расположенного левее n-й позиции. Позаботьтесь о том, чтобы ваша программа вела
себя разумно в случае очень длинных строк, а также когда до n-й позиции не встречается ни одного символа
пробела или табуляции.
*/
#include <stdio.h>
#define MAXLINE 1000
#define N 5 // n позиция
#define IN 1
#define OUT 0

int getstr(char line[],int lim);

int main()
{
    char line[MAXLINE];
    int i,len,state;
    int count = 0;
    
    
    while((len = getstr(line,MAXLINE)) > 0)
    {
        for(i = 0; line[i] != '0'; ++i)
        {
            while(count < N)
            {
                state = IN;
                printf("%c",line[i]);
                ++count;
                ++i;
            }
            if (count >= N)
            {
                --i;
                state = OUT;
                count = 0;
                printf("\n");
            }
        }
    }
    
    return 0;
}

int getstr(char s[],int lim)
{
    int c,i;
    
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n';++i)
        s[i] = c;
    {
        if (c == '\n')
        {
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
    return i;
}
