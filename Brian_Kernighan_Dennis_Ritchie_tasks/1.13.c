# include <stdio.h>

# define OUT 0
# define IN 1

int main()
{
    int c,state;
    
    
    while((c = getchar()) != EOF){
        
        if(c != ' ' && c != '\t' && c != '\n'){
            
            state = IN;
            putchar('-');
            
        }
        
        else if (state = IN){
            state = OUT;
            putchar('\n');
        }
    }
    return 0;
}

