//Leia as respostas de 10 pessoas (valores de 1 a 5) e conte quantas vezes cada nota apareceu.

#include <stdio.h>
#define SIZE 10

int main(){
    int pessoas[SIZE];
    int nota;
    int contador[6] = {0};

    for(int i = 0; i < SIZE; i++){
        printf("Digite a sua nota de 1 - 5: ");
        scanf("%d", &nota);

        if(nota >= 1 && nota <=5){
            contador[nota]++;
        }else{
            printf("Nota inválida. Tente Novamente!\n");
            i--;
        }
    }

    printf("\n");

    printf("A quantidade das notas que apareceram foi:\n");
    for (int i = 1; i <= 5; i++){
        if(contador[i] > 0){
            printf("A nota %d aparece %d vezes.\n", i, contador[i]);
        }
    }
    



    return 0;
}
