#include <stdio.h>

int main() {
    int ano; 

    printf("Digite um ano para verificar se e bissexto ou nao: \n");
    scanf(" %i", &ano);

    if ( (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0 && ano % 100 != 0) ) {
        printf("Ano e bissexto");
    } else {
        printf("Ano nao bissexto");
    }
    
    return 0;

}
