//Leia números até o usuário digitar 0. Mostre o maior e o menor número digitado.

#include <stdio.h>

int main(){
    int maior;
    int menor;
    int num;

    printf("Digite 0 para sair\n\n");

    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    maior = num;
    menor = num;

    while(num != 0){

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

        if(num != 0){
            if(num > maior){
                maior = num;
            }

            if(num < menor){
                menor = num;
            }
        }
    }

    printf("O maior número é %d\n", maior);
    printf("O menor número é %d\n", menor);


    return 0;
}
