// Даны два числа a и b. Найти их среднее арифметическое: (a + b)/2.

# include <stdio.h>

int main()
{
    int a,b;
    
    scanf("%d%d",&a,&b);
    float c = (a + b) / 2;
    
    printf("%f",c);
    
    return 0;
}