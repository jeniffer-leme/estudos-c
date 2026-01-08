//Crie um vetor de 5 números e imprima todos eles.

#include <stdio.h>

int main(){
   int vetor[5];

   for(int i = 0; i < 5; i++){
    printf("Digite o %d° número: ", i + 1);
    scanf("%d", &vetor[i]);
   }

   printf("\n");

   printf("Os números são: \n");
   for(int i = 0; i < 5; i++){
    printf("%d\n", vetor[i]);
   }

    return 0;
}
