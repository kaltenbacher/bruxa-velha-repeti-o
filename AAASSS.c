#include <stdio.h>
#include <stdlib.h>

int main()

{
    float num1, num2, med, sub, mult, div, numde;

    int numdef;

    printf(" Digite os dois numeros que ser�o usados ");

    printf("Primeiro numero");
    scanf("%f", &num1);

    printf("Segundo numero");
    scanf("%f", &num2);

    printf("Voc� tem quatro op��es:");
    printf("Digite 1 para que vo�� obtenha a media deles:");
    printf("Digite 2 para obter a diferen�a de menor e menor entre eles ");
    printf("Digite 3 para obter a multiplica��o dos numeros");
    printf("digite 4 para dividir o primeiro numero pelo segundo");

    scanf("&d",&numdef);

    if(numdef == 1)

    {

        med == (num1 + num2);
        printf("aqui est� a m�dia: %.1f",med);

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

     printf("A diferen�a entre o maior e o menor �:%.1f",sub);

    }

    else if (numdef == 3)


    {

    mult = num1 * num2;
    printf ("O resultado da multiplica��o �:%.1f",mult);


    }
    else if (numde == 4)


    {

    div = num1 / num2 ;
    printf("O resultado da multiplica��o �:%.lf",div);

    }

}
