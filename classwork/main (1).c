#include <stdio.h>

int main()
{
    
    int nwhite,nother,c,i;
    int ndigit[10];
    
    nwhite = nother = 0;
    
    for(i = 0; i < 10; ++i)
        ndigit[i] = 0;
        
    while((c = getchar()) != EOF){
        if(c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if(c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }
    printf("\nЦифры: \n");        
    for(i = 0; i < 10; ++i)
        printf("%d ",ndigit[i]);
    printf("\nСимволы - разделители: %d\nДругие символы: %d\n",nwhite,nother);
    
    return 0;
    
}