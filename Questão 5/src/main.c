#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    float l1, l2, l3;

    printf("Digite o primeiro lado: \n");
    scanf(" %f", &l1);
    printf("Digite o segundo lado: \n");
    scanf(" %f", &l2);
    printf("Digite o terceiro lado: \n");
    scanf(" %f", &l3);

    if ( (l1 == l2 && l1 == l3) ){
        printf("Equilatero");
    } else if ( (l1 == l2 && l1 != l3) || (l1 == l3 && l1 != l2) || (l2 == l3 && l2 != l1) ){
        printf("Isosceles");
    } else {
        printf("Escaleno");
    }

    return 0;
}
