/*
Напишите функцию reverse(s), размещающую символы в строке s в обратном порядке.
Примените ее при написании программы, которая каждую вводимую строку располагает в обратном порядке.
*/
#include <stdio.h>
#define MAXLINE 50

int getstr(char line[],int maxline);
void reverse(char arr[]);

int main()
{
    int len;
    int i;
    char line[MAXLINE];
    
    while((len = getstr(line,MAXLINE)) > 0){
        
        reverse(line);

        printf("%s",line);
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

void reverse(char arr[])
{
    int i,z,result;
    
    for(i = 0; arr[i] != '\0'; ++i)
        ;
    // i --> длина массива
    
    for(z = 0; z < i; ++z){
        result = arr[z];
        arr[z] = arr[i - 1];
        arr[i - 1] = result;
        --i;
    }
    
}
