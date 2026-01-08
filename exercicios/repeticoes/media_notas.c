//Leia notas até o usuário digitar -1 e mostre a média da turma.

#include <stdio.h>

int main(){
    float nota;
    float soma = 0;
    float media = 0;
    int quantidade = 0;

    printf("Digite -1 para encerrar as notas.\n\n");

    do{
        printf("Digite a nota: ");
        scanf("%f", &nota);

        if(nota != -1){
            soma += nota;
            quantidade++;
        }

    }while(nota != -1);

    if(quantidade > 0){
        media = soma / quantidade;
        printf("Notas encerradas!\n");
        printf("A media é %.2f", media);
    }else{
        printf("Nenhuma nota digitada.\n");
    }

    return 0;
}
