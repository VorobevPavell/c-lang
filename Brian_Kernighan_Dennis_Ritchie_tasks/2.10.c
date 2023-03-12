/*
Напишите функцию lower, которая переводит большие буквы в малые, 
используя условное выражение (а не конструкцию if-else).
*/
#include <stdio.h>
#define LEN 100
void lower(char s[])
{
    int i = 0;
    for(i; s[i] != '\0'; ++i)
        s[i] = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] += 'a' - 'A' : s[i];
}

int main()
{
    char myStr[LEN] = {'H','D','L','L','O','\0'};
    lower(myStr);
    printf("%s",myStr);
    return 0;
}
