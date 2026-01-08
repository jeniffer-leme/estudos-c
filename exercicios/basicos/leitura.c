//Escrever um programa que leia 2 números e imprima a média.

#include <stdio.h>

int main(){
    int num = 5;
    int num2 = 15;
    int media;

    media = (num + num2) / 2;

    printf("A média de %d + %d é %d\n", num, num2, media);

    return 0;
}
