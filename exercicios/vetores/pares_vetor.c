//Leia 10 números e armazene em um vetor. Depois, mostre apenas os números pares.

#include <stdio.h>

int main(){
    int vetor[10];
    int par;

    printf("Digite somente números inteiros.\n");
    for(int i = 0; i < 10; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\n");

    printf("Dentre os números digitados, os pares são:\n");
    for(int i = 0; i < 10; i++){
        if(vetor[i] %2 == 0){
            printf("%d ", vetor[i]);
        }
    }
    
    return 0;
}
