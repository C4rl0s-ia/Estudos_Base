#include <stdio.h>

int cont_letra(char palavra[], int i) {
    //condição para encerrar o loop. 
    if (palavra[i] == '\0') {
        return 0;
    }
    //Variavel para ser usada para efetuar a incrementação da quantidade de vogais
    int quantidadeVogal = 0;

    if ((palavra[i] == 'a') || (palavra[i] == 'e') || (palavra[i] == 'i') || (palavra[i] == 'o') || (palavra[i] == 'u')) {
        quantidadeVogal++;
    }

    return quantidadeVogal + cont_letra(palavra, i + 1);

}

int main () {
    char palavra[100]; //valor colocado devido a existência da palavra quimica mais conhecida como Titin em sua versão portuguesa. Apenas para brincar. 

    printf("digite uma palavra: \n");
    scanf(" %s", palavra);
    
    int totaisVogais = cont_letra(palavra, 0);
    printf("O total de vogais da palavra e: %i",  totaisVogais);

    return 0;
}
