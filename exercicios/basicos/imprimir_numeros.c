//Imprimir Números Pares de 1 a 100

#include <stdio.h>

int main(){

    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            printf("%d\n", i);
        }

    }
    return 0;
}
