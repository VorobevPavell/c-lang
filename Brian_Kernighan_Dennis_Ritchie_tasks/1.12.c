/*
Напишите программу, которая печатает содержимое своего ввода, помещая по одному
слову на каждой строке.
*/

# include <stdio.h>
# define IN 1
# define OUT 0

int main()
{
    int c,state;
    
    
    while((c = getchar()) != EOF){
        if(c != ' ' && c != '\t' && c != '\n'){
            state = IN;
            putchar(c);
        }
        else if(state = IN){
            putchar('\n');
            state = OUT;
        }
    }
    return 0;
}