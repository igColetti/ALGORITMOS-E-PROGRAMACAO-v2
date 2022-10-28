// EXERCICO 1

#include <stdio.h>

void verificaMedia( float media ) {

    if ( media < 6 ) {

        printf("\nmenor que 6");
    }

    if ( media > 6 ) {
        
        printf("\nmaior que 6");
    }

    if ( media == 6 ) {
        
        printf("\nigual a 6");
    }
     
}

void main() {
    float n1,n2,media;

    printf("Digite a primeira nota: \n");
    scanf("%f", &n1);
    printf("Digite a primeira nota: \n");
    scanf("%f", &n2);

    media = ( ( n1 + n2 ) / 2 );

    verificaMedia(media);

}

//EXERCICIO 2

#include <stdio.h>

void verificaTemp( float temp ) {

    if ( temp < 0 ) {

        printf("\nSolido");

    }

    if ( temp > 0 && temp <= 46 ) {
        
        printf("\nLiquido");

    }

    if ( temp > 46 ) {

        printf("\nGasoso");

    }
     
}

void main() {
    float temp;

    printf("Digite a temperatura: \n");
    scanf("%f", &temp);

    verificaTemp(temp);

}

//EXERCICIO 3

#include <stdio.h>

void retornaTab(int num) {
    int i,aux;


    for ( i = 0; i <= 10; i++ ) {
        aux = num * i;
        printf("\n%d° - %d * %d = %d", i,num,i,aux);
    }

}

void main(){
    int num;

    printf("\nDigite um numero para saber a tabuada:\n");
    scanf("%d", &num);

    retornaTab(num);

}


//EXERCICIO 4

#include <stdio.h>

void calculaResto() {
    int i, aux, divisor;
    divisor = 11;

    for ( i = 1000; i <= 2000; i++) {
        aux = i % divisor;
        
        if ( aux == 5 ) {

            printf("\nO numero %d retornou resto 5 !", i);

        }

    }

}

void main(){

    calculaResto();

}

//EXERCICIO 5

#include <stdio.h>


void verificaNum() {
    int numeros[15];
    int maior,menor,i = 0;

    for ( i = 0; i < 15; i++ ){
        printf("Insira o %d° numero: \n", i);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for ( i = 0; i < 15; i++) {

        if ( numeros[i] > maior ) {
            maior = numeros[i]; 
        }

        if ( numeros[i] < menor ) {
            menor = numeros[i];
        }
    }

    printf("\nO maior numero é %d", maior);
    printf("\nO menor numero é %d", menor);

}

void main() {

    verificaNum();

}

//EXERCICIO 6

#include <stdio.h>

void calculaParam(int num1, int num2, int num3 ) {

    int soma,media,produto = 0;
    
    produto = ( num1*num2*num3 );
    soma = ( num1+num2+num3 );
    media = ( soma / 3 );

    printf("\n-------------------->");
    printf("\nO produto do conjunto destes três numeros é: %d", produto);
    printf("\nA soma do conjunto destes três numeros é: %d", soma);
    printf("\nA media do conjunto destes três numeros é: %d", media);
    printf("\n-------------------->\n\n");

}

void main(){

    int num1,num2,num3,i;

    for ( i = 0; i < 100; i++ ) {

        printf("\nInsira o 1° numero do conjunto de numeros: ");
        scanf("%d", &num1);
        printf("\nInsira o 2° numero do conjunto de numeros: ");
        scanf("%d", &num2);
        printf("\nInsira o 3° numero do conjunto de numeros: ");
        scanf("%d", &num3);

        calculaParam(num1,num2,num3);
    
    }

}

//EXERCICIO 7

#include <stdio.h>

void main() {
    int i,cont = 0;
    int verifica = 1;
    int qnt,impar,par;
    int num[qnt];

    while ( verifica != 0 ) {
        qnt = 1;

        for ( i = 0; i < qnt; i++ ) {

            cont++;
            printf("\nEscreva o %d° do conjunto de numeros: ", cont);
            scanf("%d", &num[i]);

            if ( num[i] == 0 ) {
                
                verifica = 0;
                break;

            }

            if ( num[i] < 0 ) {

                printf("\nPor favor, digite um numero positivo!, : ");
                scanf("%d", &num[i]);

            }

            qnt++;

        }

    }

    for ( i=0; i < qnt - 1; i++ ) {

        if ( num[i] % 2 == 0 ) {

            printf("\n o numero %d é PAR", num[i]);
            par++;

        } else {

            printf("\n o numero %d é IMPAR", num[i]);
            impar++;

        }

    }

    printf("\nA quantidade de numeros IMPARES é: %d", impar);
    printf("\nA quantidade de numeros PARES é: %d", par);

}

//EXERCICIO 8

#include <stdio.h>

void main() {
    float area,raio,perimetro;
    float pi = 3.14;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;

    printf("\nA area do raio é igual a %0.2f", raio);
    printf("\nO perimetro do raio é igual a %0.2f", perimetro);
    
}

//Exercicio 9

#include <stdio.h>

void main() {
    int i;
    int cont = 0;
    int qnt = 1;
    int verifica = 1;
    float num[qnt];
    float soma = 0;
    float media = 0;

    while ( verifica != 0 ) {

        for ( i = 0; i < qnt; i++ ) {

            cont++;
            printf("\nEscreva o %d° numero: ", cont);
            scanf("%f", &num[i]);

        

            if ( num[i] == 0 ) {
                    
                verifica = 0;
                break;

            }

            if ( num[i] < 0 ) {

                printf("\nPor favor, digite um numero positivo!, : ");
                scanf("%f", &num[i]);

            }

            qnt++;

        }

        

    }

    for ( i = 0; i < qnt - 1; i++ ) {

        soma = ( soma + num[i] );  

    }

    media = ( soma / qnt );

    printf("\n Resultado da soma: %0.2f - quantidade de numeros: %d", soma, qnt);

}



