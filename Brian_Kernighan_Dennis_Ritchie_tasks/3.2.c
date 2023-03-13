/*
Напишите функцию escape(s, t), которая при копировании текста из t в s преобразует такие символы, как новая строка и табуляция в "видимые последовательности символов" (вроде \n и \t). Используйте инструкцию switch. Напишите функцию, выполняющую обратное преобразование эскейп- последовательностей в настоящие символы.
*/
#include <stdio.h>
#define MAXLEN 100

void escape(char to[], char from[])
{
    int i = 0;
    int j = 0;
        for(int i = 0; from[i] != '\0'; ++i)
        {
            switch (from[i])
            {
                case '\n' :
                    to[j++] = '\\';
                    to[j++] = 'n';
                    break;
                case '\t' :
                    to[j++] = '\\';
                    to[j++] = 't';
                    break;
                default :
                    to[j++] = from[i];
                    break;
            }
        }
        
    to[j] = '\0';
}


int main()
{
    char from[MAXLEN] = "hello\nworld\tmynameispasha";
    char to[MAXLEN];
    escape(to,from);
    printf("%s",to);
}

