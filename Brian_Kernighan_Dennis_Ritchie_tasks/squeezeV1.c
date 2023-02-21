#include <stdio.h>
#define SIZE 100

// Удаляет из строки s все символы, совпадающие с c.
void squeeze(char s[], int c)
{
    int j,i;
    for(i = j = 0; s[i] != '\0';++i)
    {
        if(s[i] != c)
            s[j++] = s[i];
            
    }
    
    s[i] = '\0';
}

int getstr(char s[], int lim)
{
    int c,i;
    
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        if(c == '\n')
            s[i++] = c;
    }
    s[i] = '\0';
    
    return i;
}


void squeeze(char s[], int c);
int getstr(char s[], int lim);
int main()
{
    int res;
    char s[SIZE] = {'h','e','l','l','o','\n'};
    //res = getstr(s,SIZE);
    squeeze(s,'l'); // удалит из строки res символы l.
    
    for(int i = 0; s[i] != '\n';++i)
        printf("%c",s[i]);
    return 0;
}
