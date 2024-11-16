#include <stdio.h>

int fat (int n) {
    if (n <= 1) {
        return 1;
    } else {
        return (n * fat(n - 1) );
    }
}

int main () {
    int num; 

    printf("Digite seu numero fatorial: \n");
    scanf("%i" , &num);

    printf("O fatorial de %i e: %i", num, fat(num));

    return 0;
}
