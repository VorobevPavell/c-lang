// Напишите программу печати всех вводимых строк, содержащих более 80 символов. (Заменю на 8 символов для простоты тестирования)
# include <stdio.h>
# define MAXLINE 40

int getstr(char line[],int maxline);


int main()
{
    int len;
    int max = 0;

    char line[MAXLINE];

    while ((len = getstr(line,MAXLINE)) > 0)
    {
        if(len > 8)
            printf("%s",line);
    }
    
        return 0;
}

int getstr(char s[],int lim){
    int c,i;

    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

