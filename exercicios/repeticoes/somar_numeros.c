//O usuário informa um número N, e o programa soma apenas os números pares de 1 até N.

#include <stdio.h>

int main(){
    int num;
    int soma = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++){

        printf("%d\n", i);

        if(i % 2 == 0){
            soma += i;
        }
    }

    printf("A soma dos números pares é %d\n", soma);

    return 0;
}
