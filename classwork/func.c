# include <stdio.h>

int power(int m, int n);

main()
{
    int i;
    for(i = 0; i < 10; ++i)
        printf("%10d %10d %10d\n", power(2,i),power(-3,i),i);
        
    return 0;
}

int power (int base, int n)
{
    int i,p;
    p = 1;
    for(i = 1; i <= n; ++i)
        p *= base;
    return p ;
}

