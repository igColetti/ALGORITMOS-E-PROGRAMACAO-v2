
#include <stdio.h>


    struct aluno {
        char nome[50];
        float nMatematica[3];
        float nAlgoritmo[3];
        float mMatematica;
        float mAlgoritmo;
    };

    void main() {

    int i,j,k, cont,cont2,cont3 = 0;
    float somaMAT, somaALG = 0;

    struct aluno alunos[5];

    for ( i = 0; i < 5; i++ ) {
        cont++;
        cont2 = 0;
        cont3 = 0;
        printf("Informe o nome do %d° aluno: ", cont);
        gets(alunos[i].nome);
        
        for ( j = 0; j < 3; j++ ) {
            cont2++;
            printf("Informe a %d° nota de Matematica: ", cont2);
            scanf("%f", &alunos[i].nMatematica[j]);
            somaMAT = somaMAT + alunos[i].nMatematica[j];
        }
        
        for ( k = 0; k < 3; k++ ) {
            cont3++;
            printf("Informe a %d° nota de Algoritmos: ", cont3);
            scanf("%f", &alunos[i].nAlgoritmo[k]);
            somaALG = somaALG + alunos[i].nAlgoritmo[k];
        }

        alunos[i].mMatematica = somaMAT / 3;
        alunos[i].mAlgoritmo = somaALG / 3;

    }

    for ( i = 0; i < 5; i++ ) {
        printf("\n\n--------------------->");
        printf("\nO aluno %s", alunos[i].nome);
        printf("\nFicou com a media nas seguintes materias: ");
        printf("\n- MATEMATICA: %0.2f", alunos[i].mMatematica);
        printf("\n- ALGORITMOS: %0.2f", alunos[i].mAlgoritmo);
        printf("\n\n--------------------->");
    }

    
}
tarefa20-10.c
Exibindo tarefa20-10.c…