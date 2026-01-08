//Escrever um switch para imprimir o dia da semana (1 a 7).

#include <stdio.h>

int main(){
    int num;
    char *dia; 

    printf("Digite um número de 1 a 7 para descobrir o dia da semana: ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        dia = "Domingo";
        break;

    case 2:
        dia = "Segunda-Feira";
        break;
        
    case 3:
        dia = "Terça-Feira";
        break;
    case 4:
        dia = "Quarta-Feira";
        break;

    case 5:
        dia = "Quinta-Feira";
        break;

    case 6:
        dia = "Sexta-Feira";
        break;
        
    case 7:
        dia = "Sábado";
        break;    

    default:
        printf("Dia inválido! Tente novamente.\n");
        break;
    }

    printf("O dia é: %s", dia);


    return 0;
}
