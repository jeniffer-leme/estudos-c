//Declarar variáveis de tipos diferentes (int, float, char).

#include <stdio.h>

int main(){
    int num;
    float decimal;
    char vogal;

    printf("Digite um número inteiro: ");      
    scanf("%d", &num);

    printf("O seu número inteiro é: %d\n\n", num);


    printf("Digite um número decimal: ");
    scanf("%f", &decimal);

    printf("O seu número  decimal é: %.2f\n\n", decimal);

    printf("Digite uma vogal: ");
    scanf(" %c", &vogal);

    printf("A sua vogal é: %c\n", vogal);
}
