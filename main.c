#include<stdio.h>

int main(){
    int n1, n2, soma, subtracao, multiplicacao, divisao;

    printf("Digite dois Numeros: ");
    scanf("%d %d", &n1,&n2);

soma = n1+n2;
subtracao = n1-n2;
multiplicacao = n1*n2;
divisao = n1/n2;

printf("\nSoma = %d\n", soma);
printf("\nSubtracao = %d\n", subtracao);
printf("\nMultiplicacao = %d\n", multiplicacao);
printf("\nDivisao = %d\n\n", divisao);

return 0 ;

}