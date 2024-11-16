#include <stdio.h>
#include <math.h>

int main () {
    float n1, n2, n3, media;

    printf("Digite sua 1 nota: \n");
    scanf(" %f", &n1);
    printf("Digite sua 2 nota: \n");     
    scanf(" %f", &n2);
    printf("Digite sua 3 nota: \n");     
    scanf(" %f", &n3);
        
    media = (n1 + n2 + n3) / 3;
    
    if (media >= 7.5) {
        printf("Aprovado. Media igual a %.2f", media);
    } else {
        printf("Reprovado. Media igual a %.2f", media);
    }
    
    return 0;
}