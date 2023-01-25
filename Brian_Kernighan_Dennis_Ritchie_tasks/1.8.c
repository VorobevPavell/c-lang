/* Напишите программу для подсчета пробелов, табуляций и новых строк */
# include <stdio.h>

int main()
{

    int space,tabs,nS,c;
    space = tabs = nS = 0;

    while((c = getchar()) != EOF){
        if (c == '\n')
            ++nS;
        else if (c == '\t')
            ++tabs;
        else if (c == ' ')
            ++space;
    }

    printf("Spaces: %d, Tabs: %d, Strings: %d\n",space,tabs,nS);
}