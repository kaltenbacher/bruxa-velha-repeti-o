#include <stdio.h>
#include <stdlib.h>

int main()

{
    float num1, num2, med, sub, mult, div, numde;

    int numdef;

    printf(" Digite os dois numeros que serão usados ");

    printf("Primeiro numero");
    scanf("%f", &num1);

    printf("Segundo numero");
    scanf("%f", &num2);

    printf("Você tem quatro opções:");
    printf("Digite 1 para que voçê obtenha a media deles:");
    printf("Digite 2 para obter a diferença de menor e menor entre eles ");
    printf("Digite 3 para obter a multiplicação dos numeros");
    printf("digite 4 para dividir o primeiro numero pelo segundo");

    scanf("&d",&numdef);

    if(numdef == 1)

    {

        med == (num1 + num2);
        printf("aqui está a média: %.1f",med);

    }

    else if (numdef == 2)

    {

      if(num1 > num2)
    {

      sub = num1 - num2;

    }

      else

    {

      sub = num2 - num1;

    }

     printf("A diferença entre o maior e o menor é:%.1f",sub);

    }

    else if (numdef == 3)


    {

    mult = num1 * num2;
    printf ("O resultado da multiplicação é:%.1f",mult);


    }
    else if (numde == 4)


    {

    div = num1 / num2 ;
    printf("O resultado da multiplicação é:%.lf",div);

    }

}
