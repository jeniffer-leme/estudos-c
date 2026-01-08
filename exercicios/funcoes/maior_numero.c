//Leia dois números e mostre o maior deles.

#include <stdio.h>

void maior (int a, int b){
    if(a > b){
        printf("O %d é maior que %d.", a, b);
    }else if(b > a){
        printf("O %d é maior que %d.", b, a);
    }else{
        printf("Eles são iguais. Não existe um maior.\n");
    }
}

int main(){
    int num;
    int num2;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Digite outro número inteiro: ");
    scanf("%d", &num2);

    maior(num, num2);

    return 0;
}
