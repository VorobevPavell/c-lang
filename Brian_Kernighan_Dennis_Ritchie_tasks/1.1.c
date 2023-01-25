/* Выясните, что произойдет, если в строковую константу аргумента printf вставить \с, где с
— символ, не входящий в представленный выше список. */

# include <stdio.h> // Включение информации о стандартной библиотеке

int main() // Определение ф-ции main() без аргументов


{ // в фигурных скобках инструкции ф-ции main()

    printf("hello world !\7\n"); // --> hello world !a (1 warning generated.)
    printf("hello world !\c\n"); // --> hello world !c (1 warning generated.)
    return 0;

}