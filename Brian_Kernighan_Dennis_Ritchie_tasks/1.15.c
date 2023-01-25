/*
Перепишите программу преобразования температур, выделив само преобразование в
отдельную функцию.

t °С = 5/9 (t °F - 32)
*/
# include <stdio.h>

# define UPPER 300
# define LOWER 0
# define STEP 20

float temperature(void)
{   
    printf("\tcels    fahr\n");
    
    for(float i = LOWER; i <= UPPER; i += STEP){
        
        float C = 5.0/9.0 * (i - 32);
        printf("%8.2f\t%5.2f\n",C,i);
    }
    
    
}

int main()
{
    float C,F,res;
    
    res = temperature();
    
    return 0;
}