//Calcular o Fatorial de um Número

#include <stdio.h>

int main(){
    long long num;
    long long resultado = 1;

    printf("Digite um valor: ");
    scanf("%lld", &num);

    if(num > 0){
        for(int i = 1; i <= num; i++){
            resultado = resultado * i;
        }
        printf("Fatorial de %lld é %lld\n", num, resultado);
    }else{
        printf("O fatorial de zero é 1");
    }

    return 0;
}
