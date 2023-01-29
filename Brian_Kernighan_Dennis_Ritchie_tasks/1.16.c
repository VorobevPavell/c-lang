// Программа печатает самую длинную строку (в пределах ограничения) и ее размер (без учета ограничения).

# include <stdio.h>
# define MAXLINE 1000

int getstr(char line[],int maxline);
void copy(char to[],char from[]);

int main(void){
    int len;
    int max = 0;
    int maxlen;

    char line[MAXLINE];
    char longest[MAXLINE];

    while((len = getstr(line,MAXLINE)) > 0){

        if(len > max){
            max = len;
            copy(longest,line);
        }
    }
    if(max > 0)
        printf("%s\n",longest);
        printf("%d",max); // Размер строки

    return 0;

}

int getstr(char s[],int lim)
{
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

void copy(char to[],char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}
