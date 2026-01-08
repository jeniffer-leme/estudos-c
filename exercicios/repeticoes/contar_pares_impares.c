//Usuário informa 10 números. Use um contador para dizer quantos são pares e quantos são ímpares.
#include <stdio.h>
#define SIZE 10

int main(){
    int num;
    int par = 0;
    int impar = 0;

    for(int i = 0; i < SIZE; i++){
        printf("Informe o número %d: ", i + 1);
        scanf("%d", &num);

        if(num % 2 == 0){
            par++;
        }else{
            impar++;
        }

    }

    printf("Existem %d números pares.\n", par);
    printf("Existem %d números ímpares.\n", impar);


    return 0;
}
