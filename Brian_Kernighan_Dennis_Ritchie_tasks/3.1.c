/*
В нашей программе бинарного поиска внутри цикла осуществляются две проверки, хотя могла быть только одна
(при увеличении числа проверок вне цикла). 
Напишите программу, предусмотрев в ней одну проверку внутри цикла. Оцените разницу во времени выполнения.
*/
#include <stdio.h>
#define LEN 5

/* Функция из учебника. Скорость =  О(log от n) */
int binsearch(int x, int arr[], int llen)
{
    int mid,low,high;
    low = 0;
    high = llen - 1;
    while(low <= high)
    {
        mid = (low + high) / 2;
        
        if(x < arr[mid])
            high = mid - 1;
        else if(x > arr[mid])
            low = mid + 1;
        else
            return mid;
    }
    
    return -1;
}


/*
Функция с одной проверкой внутри цикла. По-моему мнению, скорость от этого не поменяется и так же будет логарифмической.
Выгоднее будет только в том случае, если искомое число будет по середине массива, тогда эта Функция будет быстрее, но в общем случае ничего не изменится
*/

int binsearch_v2(int x,int arr[], int llen)
{
    int mid,low,high;
    low = 0;
    high = llen - 1;
    mid = (low + high) / 2;
    while(low <= high && x != arr[mid]) // добавлю условие x != arr[mid] , если искомое число - "середина" массива, то оно сразу вернется, не заходя в цикл
    {
        
        if(x < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    
    return mid;
}
int main()
{
    int res,res2,n;
    scanf("%d",&n); // число которое ищем
    int arr[LEN];
    for(int i = 0; i < LEN; scanf("%d",&arr[i++]));
    res = binsearch(n,arr,LEN);
    res2 = binsearch_v2(n,arr,LEN);
    printf("\n");
    printf("%d",res);
    printf("\n");
    printf("%d",res2);
}
