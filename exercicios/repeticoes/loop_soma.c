//Leia 10 números e mostre a soma deles.

#include <stdio.h>

int main(){
    int num;
    int soma = 0;

    for(int i = 0; i < 10; i++){
        printf("Digite o %d° número inteiro: ", i + 1);
        scanf("%d", &num);

        soma += num;
    }

    printf("A soma é %d\n", soma);



    return 0;
}
