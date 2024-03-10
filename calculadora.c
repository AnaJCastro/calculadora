#include <stdio.h>

int main()
{
    float numero1, numero2, resultado;
    int tipo;
     printf("para soma, digite 1, para substração digite 2, para multiplicação digite 3, para divisão digite 4, para sair digite 5");
    scanf("¨%i",&tipo);

    //significa que quando escolher outro numero que não seja 5, repetirá o codigo normalmente.
    while(tipo != 5) 
    {
   

    printf("insira o valor 1: \n");
    scanf("%f", &numero1);

    printf("insira o valor 2: \n");
    scanf("%f", &numero2);
    
    switch (tipo)
    {
    case 1:
        resultado = numero1 + numero2;
        printf("O resultado e %f\n", resultado);
        break;

    case 2:
        resultado = numero1 - numero2;
        printf("O resultado e %f\n", resultado);
        break;
    case 3:
        resultado = numero1 * numero2;
        printf("O resultado e %f\n", resultado);
        break;

    case 4:
        resultado = numero1 / numero2;
        printf("O resultado e %f\n", resultado);
        break;

    default:
        printf("Saindo!\n");
    }

    }
}