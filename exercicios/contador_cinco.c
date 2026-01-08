//Leia 10 números e conte quantas vezes aparece o número 5.

#include <stdio.h>

int main(){
    int vetor[10];
    int quantidade = 0;

    printf("Digite números inteiros.\n");
    for(int i = 0; i < 10; i++){
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(int i = 0; i < 10; i++){
        if(vetor[i] == 5){
            quantidade++;
        }
    }

    if(quantidade > 0){
        printf("O número 5 aparece %d vezes\n", quantidade);
    }else{
        printf("O número 5 não aparece nenhuma vez.\n");
    }

    return 0;
}
