#include <stdio.h>

int tabuada (int number) {
    printf("A tabuada do numero %i e: \n", number);

    printf("1 x %i = %i \n", number, number * 1);
    printf("2 x %i = %i \n", number, number * 2);
    printf("3 x %i = %i \n", number, number * 3);
    printf("4 x %i = %i \n", number, number * 4);
    printf("5 x %i = %i \n", number, number * 5);
    printf("6 x %i = %i \n", number, number * 6);
    printf("7 x %i = %i \n", number, number * 7);
    printf("8 x %i = %i \n", number, number * 8);
    printf("9 x %i = %i \n", number, number * 9);
    printf("10 x %i = %i \n", number, number * 10);

//Metodo mais simples e prático: Precisaria declarar apenas a variavel tabuada
//   for (int i = 1; i <= 10; i++) {
//       tabuada = numb * i;
//       printf("Sua tabuada e: %i\n", tabuada);
//   }

}

int main()
{
    int numb;

    printf("Digite um numero inteiro: \n");
    scanf(" %i", &numb);

    tabuada(numb);

    return 0;
    
}
