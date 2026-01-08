//Leia 8 números e mostre a soma de todos.

#include <stdio.h>

int main(){
    int vetor[8];
    int soma = 0;

    printf("Digite somente números inteiros.\n");
    for(int i = 0; i < 8; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    printf("Os números digitados foram:\n");
    for(int i = 0; i < 8; i++){
        printf("%d ", vetor[i]);

        soma += vetor[i];
    }

    printf("\n\n");

    printf("A soma é %d.\n", soma);


    return 0;
}
