#include <stdio.h>
int matoi(char s[]);
int main()
{
    char *arr = "123adasf23";
    int N;
    N = matoi(arr);
    printf("%d ",N);
    return 0;
}

int matoi(char s[])
{
    int i,n = 0;
    
    for(i = 0; s[i] >= '0' && s[i] <= '9';++i)
        n = 10 * n + (s[i] - '0');
        
    return n;
}
