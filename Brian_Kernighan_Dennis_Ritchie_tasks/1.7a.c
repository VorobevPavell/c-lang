/* подсчет вводимых символов; 1-я версия */
/* # include <stdio.h>

int main ()
{

    long nc;
    nc = 0;

    while (getchar() != EOF)
        ++nc;
    printf("%ld\n",nc);

} */

/* подсчет вводимых символов; 2-я версия */

# include <stdio.h>

int main()
{

    double nc;


    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n",nc);

}