//Peça um número e exiba a tabuada dele (de 1 a 10).

#include <stdio.h>

int main(){
    int num;
    int tabuada;

    printf("Digite o valor desejado para a sua tabuada de 1 a 10: ");
    scanf("%d", &num);

    for(int i = 1; i <= 10; i++){

        tabuada = num * i;

        printf("%d x %d = %d\n", num, i, tabuada);
    }


    return 0;
}
