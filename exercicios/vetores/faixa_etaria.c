//Leia a idade de 20 pessoas e conte quantas estão em cada faixa etária (0-12, 13-17, 18-59, 60+)

#include <stdio.h>
#define SIZE 20
#define CRIANCA 0
#define ADOLE 1
#define ADULTO 2
#define IDOSO 3

int main(){
    int idade;
    int contador[4] = {0};

    for(int i = 0; i < SIZE; i++){
        printf("Pessoa %d, digite a sua idade: ", i + 1);
        scanf("%d", &idade);

        if(idade >= 0 && idade <= 12){
            contador[CRIANCA]++;
        } else if(idade > 12 && idade < 18){
            contador[ADOLE]++;
        } else if(idade > 17 && idade < 60){
            contador[ADULTO]++;
        } else if (idade > 59){
            contador[IDOSO]++;
        } else {
            printf("Idade inválida. Tente Novamente!\n");
            i--;
        }

    }

    printf("\n");

    printf("Existem %d pessoas de 0-12 anos.\n", contador[CRIANCA]);
    printf("Existem %d pessoas de 13-17 anos.\n", contador[ADOLE]);
    printf("Existem %d pessoas de 18-59 anos.\n", contador[ADULTO]);
    printf("Existem %d pessoas de 60+ anos.\n", contador[IDOSO]);
       

    return 0;
}
