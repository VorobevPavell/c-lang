// Дана длина ребра куба a. Найти объем куба V = a3 и площадь его поверхности S = 6·a2.


# include <stdio.h>
# include <math.h>
int main()
{
    int a;
    
    scanf("%d",&a);
    float v = pow(a,3);
    
    printf("Объем куба равен: %f\n",v);
    
    float s = 6 * pow(a,2);
    printf("Площадь: %f\n",s);
    
    return 0;
    
}