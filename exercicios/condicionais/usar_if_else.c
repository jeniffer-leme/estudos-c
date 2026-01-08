//Usar if/else para verificar se um número é par ou ímpar.

#include <stdio.h>

void verificador(int a){
    if(a % 2 == 0){
        printf("%d é par\n", a);
    }else{
        printf("%d é ímpar", a);
    }
}

int main(){
    int num;

    printf("Digite uma valor: ");
    scanf("%d", &num);

    verificador(num);


    return 0;
}
