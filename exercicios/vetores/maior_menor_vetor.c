//Leia 6 números e diga qual é o maior e o menor.

#include <stdio.h>

int main(){
    int vetor[6];
    int maior;
    int menor;

    printf("Digite somente números inteiros.\n");
    printf("\n");
    for(int i = 0; i < 6; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];
    menor = vetor[0];
    
    for(int i = 1; i < 6; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }

        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    printf("\n");
    
    printf("O maior número é %d\n", maior);
    printf("O menor número é %d\n", menor);

    return 0;
}
