/* подсчет цифр, символов-разделителей и прочих символов */
#include <stdio.h>
#define LEN 10
int main()
{
    int c, i, nwhite, nother, ndigit[LEN];
    
    nwhite = nother = 0;
    for(i = 0; i < LEN; ++i)
        ndigit[i] = 0;
        
    while((c = getchar()) != EOF)
    {
        switch (c)
        {
            case '0' : case '1' : case '2' : case '3' : case '4' :
            case '5' : case '6' : case '7' : case '8' : case '9' :
                ndigit[c - '0']++;
                break;
            case ' ' :
            case '\t' :
            case '\n' :
                nwhite++;
                break;
            default :
                nother++;
                break;
                
            
        }
    }
    
    printf("\nцифры = ");
    for(int i = 0; i < LEN; printf(" %d ",ndigit[i++]))
        ;
    printf (", символов-разделителей = %d, прочих = %d\n", nwhite, nother);
    return 0;

    return 0;
}
