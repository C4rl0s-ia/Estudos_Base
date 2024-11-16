#include <stdio.h>

int main () {
    long int num, i;

    printf("Digite um numero para identificar se e impar ou par: \n");
    scanf(" %i", &num);

    i = num % 2;

    if ((i == 0)) {
        printf("Seu numero e par");
    } else {
        printf("Seu numero e impar");
    }

    return 0;

}
