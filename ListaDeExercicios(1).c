/// EXERCICIO 1
 
#include <stdio.h>
 
void main () {
 
    float n1,n2,n3;
 
    printf("Digite o primeiro numero: ");
    scanf("%f", &n1);
    printf("Digite o segundo numero: ");
    scanf("%f", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
 
    if (n1 <= n2 && n2 <= n3)
    {
      printf("\nA ordem crescente: %0.2f %0.2f %0.2f\n", n1, n2, n3);
    }
    else if (n1 <= n3 && n3 <= n2)
    {
      printf("\nA ordem crescente: %0.2f %0.2f %0.2f\n", n1, n3, n2);
    }
    else if (n2 <= n1 && n1 <= n3)
    {
      printf("\nA ordem crescente: %0.2f %0.2f %0.2f\n", n2, n1, n3);
    }
    else if (n2 <= n3 && n3 <= n1)
    {
      printf("\nA ordem crescente: %0.2f %0.2f %0.2f\n", n2, n3, n1);
    }
    else if (n3 <= n1 && n1 <= n2)
    {
      printf("\nA ordem crescente: %0.2f %0.2f %0.2f\n", n3, n1, n2);
    }
    else
    {
      printf("\nA ordem crescente: %0.2f %0.2f %0.2f\n", n3, n2, n1);
    }
 
 
}
 
 
 
/// EXERCICIO 2
 
#include <stdio.h>
 
void main () {
 
    float n1,n2,n3,media;
 
    printf("Informe a primeira nota: ");
    scanf("%f", &n1);
    printf("Informe a segunda nota: ");
    scanf("%f", &n2);
    printf("Informe a terceira nota: ");
    scanf("%f", &n3);
 
    media = ( (n1 + n2 + n3 ) / 3 );
 
    if ( media <= 0 && media <= 3 )
      printf("\nO aluno está REPROVADO!");
   
    if ( media >= 3 && media <= 7 )
      printf("\nO aluno terá que fazer EXAME!");
   
    if ( media >= 7 && media <= 10 )
      printf("\nO aluno está APROVADO!");
 
}
 
 
 
/// EXERCICIO 3
 
#include <stdio.h>
 
void main () {
 
    float n1,n2,n3,media;
    int p1,p2,p3;
 
    printf("Informa a nota do Trabalho de Laboratório: ");
    scanf("%f", &n1);
    p1 = 2;
 
    printf("Informa a nota da Avaliação Semestral: ");
    scanf("%f", &n2);
    p2 = 3;
 
    printf("Informa a nota do Exame Final: ");
    scanf("%f", &n3);
    p3 = 5;
 
    media = ( ( n1 * p1 ) + ( n2 * p2 ) + ( n3 * p3 ) / ( p1 + p2 + p3 ) );
 
    printf("\n----------------->");
    printf("\nA sua media final foi: %0.2f", media);
    printf("\n<-----------------");
 
}
 
 
 
/// EXERCICIO 4
 
#include <stdio.h>
 
void main(){
 
    float n1,n2,n3,p1,p2,p3,media;  
 
    printf("Informe a primeira nota a ser calculada:");
    scanf("%f", &n1);
    printf("Informe o peso da nota informada ( 1 ) ");
    scanf("%f", &p1);
 
    printf("Informe a segunda nota a ser calculada:");
    scanf("%f", &n2);
    printf("Informe o peso da nota informada ( 2 ) ");
    scanf("%f", &p2);
 
    printf("Informe a terceira nota a ser calculada:");
    scanf("%f", &n3);
    printf("Informe o peso da nota informada ( 3 ) ");
    scanf("%f", &p3);  
 
    media = ( ( n1 * p1 ) + ( n2 * p2 ) + ( n3 * p3 ) / ( p1 + p2 + p3 ) );  
 
    if ( media >= 8 && media <= 10 )
        printf("Parabens, você está no grupo A, SUA MEDIA FOI: %0.2f", media);
   
    if ( media >= 7 && media < 8 )
        printf("Parabens, você está no grupo B, SUA MEDIA FOI: %0.2f", media);
   
    if ( media >= 6 && media < 7 )
        printf("Parabens, você está no grupo C, SUA MEDIA FOI: %0.2f", media);
 
    if ( media >= 5 && media < 6 )
        printf("Parabens, você está no grupo D, SUA MEDIA FOI: %0.2f", media);
   
    if ( media >= 0 && media < 5 )
        printf("Parabens, você está no grupo E, SUA MEDIA FOI: %0.2f", media);
}
 
 
/// EXERCICIO 5
 
#include <stdio.h>
 
void main () {
 
    float salario,novoSalario,aux;
    int cod;
 
    printf("Informe o salario do funcionario: ");
    scanf("%f", &salario);
    printf("Código de cargo:");
    scanf("%d", &cod);
 
    if ( cod == 1 ) {
 
        aux = ( salario * 0.5 );
        novoSalario = ( salario + aux );
 
        printf("\n----------------->");
        printf("\n Você é um (Escriturário)");
        printf("\nVocê ganhou um aumento de 50('/'): R$ %0.2f", aux);
        printf("\nSeu novo salario agora é de: R$ %0.2f", novoSalario);
        printf("\n<-----------------");
 
    }
   
    if ( cod == 2 ) {
 
        aux = ( salario * 0.35 );
        novoSalario = ( salario + aux );
 
        printf("\n----------------->");
        printf("\n Você é um (Secretário)");
        printf("\nVocê ganhou um aumento de 35('/'): R$ %0.2f", aux);
        printf("\nSeu novo salario agora é de: R$ %0.2f", novoSalario);
        printf("\n<-----------------");
 
    }
 
    if ( cod == 3 ) {
 
        aux = ( salario * 0.2 );
        novoSalario = ( salario + aux );
 
        printf("\n----------------->");
        printf("\n Você é um (Caixa)");
        printf("\nVocê ganhou um aumento de 20('/'): R$ %0.2f", aux);
        printf("\nSeu novo salario agora é de: R$ %0.2f", novoSalario);
        printf("\n<-----------------");    
 
    }
 
    if ( cod == 4 ) {
 
        aux = ( salario * 0.1 );
        novoSalario = ( salario + aux );
 
        printf("\n----------------->");
        printf("\n Você é um (Gerente)");
        printf("\nVocê ganhou um aumento de 10('/'): R$ %0.2f", aux);
        printf("\nSeu novo salario agora é de: R$ %0.2f", novoSalario);
        printf("\n<-----------------");
       
    }
 
    if ( cod == 5 ) {
 
        printf("\n----------------->");
        printf("\n Você é o (Diretor)");
        printf("\nVocê não possui aumento");
        printf("\nSeu salario é de: R$ %02.f", salario);
        printf("\n<-----------------");
 
    }
 
}
 
 
 
/// EXERCICIO 6
 
#include <stdio.h>
 
void menuEscolhas () {
   
    float salario,novoSalario,auxImposto;
    int escolha;
 
    printf("\n--- Menu de opções");
    printf("\n1. Imposto");
    printf("\n2. Novo Salário");
    printf("\n3. Classificação");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &escolha);
 
    switch ( escolha ) {
 
        case 1 : //imposto
 
          printf("\nInforme o seu salario:");
          scanf("%f", &salario);
 
          if ( salario < 500 ) {
 
            auxImposto = ( salario * 0.05 );
            printf("\nO imposto em cima do seu salario é de: R$ %0.2f", auxImposto);
 
          }
 
          if ( salario >= 500 && salario <= 850 ) {
 
            auxImposto = ( salario * 0.10 );
            printf("\nO imposto em cima do seu salario é de: R$ %0.2f", auxImposto);
 
          }
 
          if ( salario > 850 ) {
 
            auxImposto = ( salario * 0.15 );
            printf("\nO imposto em cima do seu salario é de: R$ %0.2f", auxImposto);
           
          }
 
          break;
       
        case 2 :
 
          printf("\nInforme o seu salario:");
          scanf("%f", &salario);
 
          if ( salario > 1500 ) {
 
            novoSalario = ( salario + 25 );
            printf("\nCom o aumento seu salario é de: R$ %0.2f", novoSalario);
 
          }
 
          if ( salario >= 750 && salario <= 1500 ) {
 
            novoSalario = ( salario + 50 );
            printf("\nCom o aumento seu salario é de: R$ %0.2f", novoSalario);
           
          }
 
          if ( salario >= 450 && salario < 750 ) {
 
            novoSalario = ( salario + 75 );
            printf("\nCom o aumento seu salario é de: R$ %0.2f", novoSalario);
           
          }
 
         if ( salario < 450 ) {
 
            novoSalario = ( salario + 100 );
            printf("\nCom o aumento seu salario é de: R$ %0.2f", novoSalario);
           
          }
 
          break;
 
        case 3 :
 
          printf("\nInforme o seu salario:");
          scanf("%f", &salario);
 
          if ( salario <= 700 )
            printf("\nSua classificação é ( MAL REMUNERADO ! ) ");
          else
            printf("\nSua classificação é ( BEM REMUNERADO ! ) ");
       
          break;
 
    }
 
}
 
void main () {
 
    int continua;
    void menuEscolhas();
 
    menuEscolhas();
 
    printf("\n\n");
    printf("\nDeseja voltar ao menu de escolhas ?");
    printf("\n Digite ( 1 ) para SIM e ( 2 ) para NÃO ");
    scanf("%d", &continua);
 
    while ( continua == 1 ) {
 
        menuEscolhas();
 
        printf("\n\n");
        printf("\nDeseja voltar ao menu de escolhas ?");
        printf("\n Digite ( 1 ) para SIM e ( 2 ) para NÃO ");
        scanf("%d", &continua);
 
    }
 
}
 
/// EXERCICIO 7
 
#include <stdio.h>
 
void main () {
 
    float quantidade[5];
    float valor[5];
    int aux,q;
    float auxC;
 
    aux = 0;
    q = 0;
 
 
    for ( q = 0; q < 5; q++ ) {
 
            printf("Informe a quantidade vendida do produto: ");
            scanf("%f", &quantidade[q]);
            printf("Informe o valor deste produto: ");
            scanf("%f", &valor[q]);
 
    }
 
    for ( aux = 0; aux < 5; aux++ ) {
 
        if ( quantidade[aux] < 500 && valor[aux] < 30 ) {
 
            auxC = ( valor[aux] * 0.10 );
            valor[aux] = ( valor[aux] + auxC );
 
        }
 
        if ( quantidade[aux] >= 500 && quantidade[aux] < 1200  && valor[aux] >= 30 && valor[aux] < 80 ) {
 
            auxC = ( valor[aux] * 0.15 );
            valor[aux] = ( valor[aux] + auxC );
           
        }
 
        if ( quantidade[aux] >= 1200 && valor[aux] >= 80 ) {
 
            auxC = ( valor[aux] * 0.20 );
            valor[aux] = ( valor[aux] - auxC );
           
        }
 
    }
 
    aux = 0;
 
    printf("\n-------------------->");
 
    for ( aux = 0; aux < 5; aux++ ) {
 
        printf("\nO valor do ( %d ) item passou a ser : R$ %0.2f ",aux, valor[aux]);
 
    }
 
    printf("\n<--------------------");
   
}
 
 
/// EXERCICIO 8
 
#include <stdio.h>
 
void main () {
 
    float peso,altura;
 
    printf("Informe a sua altura ( EM METROS ) : ");
    scanf("%f", &altura);
    printf("Informe o seu pego ( EM KG ) : ");
    scanf("%f", &peso);
 
    if ( altura < 1.2 && peso < 60 )
      printf("Categoria A");
 
    if ( altura < 1.2 && peso >= 60 && peso <= 90 )
      printf("Categoria D");
 
    if ( altura < 1.2 && peso > 90 )
      printf("Categoria G");
 
    if ( altura >= 1.2 && altura <= 1.7 && peso < 60 )
      printf("Categoria B");
 
    if ( altura >= 1.2 && altura <= 1.7 && peso >= 60 && peso <= 90 )
      printf("Categoria E");
 
    if ( altura >= 1.2 && altura <= 1.7 && peso > 90 )
      printf("Categoria H");
 
    if ( altura > 1.7 && peso < 60 )
      printf("Categoria C");
 
    if ( altura > 1.7 && peso >= 60 && peso <= 90 )
      printf("Categoria F");
 
    if ( altura < 1.7 && peso > 90 )
      printf("Categoria I");
 
}
 
 
/// EXERCICIO 9
 
#include <stdio.h>
 
void main () {
  int idade;
 
  printf("Informe a idade do nadador: ");
  scanf("%d", &idade);
 
  if ( idade >= 5 && idade <= 7 ) {
 
    printf("Você está na categoria ( INFANTIL )");
 
  }
 
  if ( idade >= 8 && idade <= 10 ) {
 
    printf("Você está na categoria ( JUVENIL )");
 
  }
 
  if ( idade >= 11 && idade <= 15 ) {
 
    printf("Você está na categoria ( ADOLESCENTE )");
 
  }
 
  if ( idade >= 16 && idade <= 30 ) {
 
    printf("Você está na categoria ( ADULTO )");
 
  }
 
  if ( idade > 30 ) {
 
    printf("Você está na categoria ( SÊNIOR )");
 
  }
 
}
 
/// EXERCICIO 10
 
#include <stdio.h>
#include <math.h>
 
void main () {
 
  float num1,num2,aux;
  int escolha;
 
  printf("\n------ OPÇÕES ---->");
  printf("\n1. Somar dois numeros");
  printf("\n2. Raiz quadrada de um número");
  printf("\n<----------");
  printf("\n\nDigite a opção desejada");
  scanf("%d", &escolha);
 
  switch ( escolha ){
 
    case 1:
     
      printf("Digite o primeiro numero:");
      scanf("%f", &num1);
      printf("Digite o segundo numero:");
      scanf("%f", &num2);
 
      aux = ( num1 + num2 );
 
      printf("\nA soma deste dois numeros é igual a: %0.2f", aux);
 
      break;
   
    case 2:
     
      printf("Digite o numero para descobrir a raiz quadrada");
      scanf("%f", num1);
 
      aux = sqrt(num1);
 
      printf("A raiz quadrada é: %0.2f", aux);
 
      break;
 
  }
 
}
 
/// EXERCICIO 11
 
void main () {
 
  float salario,novoSalario,aux;
 
  printf("Insira o salario do funcionario: ");
  scanf("%f", &salario);
 
  if ( )
 
}
 

