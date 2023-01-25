/* это программа, копирующая по одному
символу с входного потока в выходной поток */

# include <stdio.h>


int main()
{

    int c;
    c = getchar();


    while (c != EOF){
        putchar(c);
        c = getchar();

    }

}