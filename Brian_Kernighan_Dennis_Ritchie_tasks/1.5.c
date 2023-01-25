/* Измените программу преобразования температур так, чтобы она печатала таблицу в
обратном порядке, т. е. от 300 до 0. */


# include <stdio.h>
# define UPPER  300
# define LOWER  -20
# define STEP  20

int main()
{

    int fahr;
    for (fahr = UPPER; fahr != LOWER; fahr -= STEP)
        printf("%d\t%6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    return 0;
}   


/* 
output:
300	 148.9
280	 137.8
260	 126.7
240	 115.6
220	 104.4
200	  93.3
180	  82.2
160	  71.1
140	  60.0
120	  48.9
0	 -17.8
 */