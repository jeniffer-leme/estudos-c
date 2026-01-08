//Leia a idade de uma pessoa e diga se ela é maior de idade (18 anos ou mais).

#include <stdio.h>

void deMaior(){
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Parabéns! Você é maior de idade.");
    }else{
        printf("Você ainda é de menor.");
    }
}

int main(){

    deMaior();

    return 0;
}
