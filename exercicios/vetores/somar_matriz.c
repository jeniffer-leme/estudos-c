//Somar Todos os Elementos de uma Matriz

#include <stdio.h>

int main(){
    int num[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int soma = 0;

    printf("Vamos fazer a soma de uma matriz 2x3.\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um valor: ");
            scanf("%d", &num[i][j]);
        }
    }

    printf("\n");

    printf("A matriz é\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", num[i][j]);

            soma += num[i][j];
        }
        printf("\n");
    }

    printf("\n\n");

        printf("A soma dos elementos da matriz é %d", soma);

    return 0;
}
