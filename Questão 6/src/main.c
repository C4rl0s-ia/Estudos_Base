#include <stdio.h>
#include <math.h>


int main() {
    int valor, quantNegativo = 0, quantPositivo = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite seu %i numero \n" , i);
        scanf(" %i", &valor);

        if (valor < 0 ){
            quantNegativo++;
        } else {
            quantPositivo++;
        }
    }

        printf("A quantidade de numeros positivos foi de: %i \n A quantidade de numeros negativos foi de: %i \n", quantPositivo, quantNegativo);
        
    return 0;

}
