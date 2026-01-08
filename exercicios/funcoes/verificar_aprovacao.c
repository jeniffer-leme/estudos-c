//Leia a nota de um aluno e diga se ele está aprovado (nota ≥ 7) ou reprovado.

#include <stdio.h>

void nota(){
    float nota1, nota2, nota3;
    
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    float media = 0;

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7){
        printf("Parabéns!! Você foi aprovado");
    }else{
        printf("Infelizmente você foi reprovado!");
    }

}

int main(){
    
    nota();

    return 0;
}
