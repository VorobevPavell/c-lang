/*
Напишите программу, печатающую гистограммы частот встречаемости вводимых символов.
*/
# include <stdio.h>
# define END 128


int main()
{
    int c;
    int nchar;
    int arr[128];
    int state = 0;
    
    for(int i = 0; i < END; i++){ // заполним массив нулями
        arr[i] = 0;
    }
    
    while((c = getchar()) != EOF){ // сколько раз встречается символов
        arr[c] ++;
    }
    
    for(int i = 32; i < END; i++){
        
        if(arr[i] > 0){ // если встречается хотя бы раз
            printf("\n");
            putchar(i);
            printf(": ");
            
            while(state <= arr[i]-1){
                printf("*");
                state++;
            }
        state = 0 ;
    }
    }
    
    return 0;
}