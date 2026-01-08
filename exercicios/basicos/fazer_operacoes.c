//Fazer operações matemáticas básicas (soma, subtração, multiplicação, divisão).

#include <stdio.h>

float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a * b;
}

float divisao(float a, float b){
    return a / b;
}

int main(){
    float num;
    float num2;
    
    printf("Digite um valor: ");
    scanf("%f", &num);

    printf("Digite outro valor: ");
    scanf("%f", &num2);

    float resultado = soma(num, num2);
    printf("%.2f + %.2f = %.2f\n\n", num, num2, resultado);

    resultado = subtracao(num, num2);
    printf("%.2f - %.2f = %.2f\n\n", num, num2, resultado);

    resultado = multiplicacao(num, num2);
    printf("%.2f x %.2f = %.2f\n\n", num, num2, resultado);

    resultado = divisao(num, num2);
    printf("%.2f / %.2f = %.2f\n\n", num, num2, resultado);


    return 0;
}
