#include<stdio.h>

typedef struct{ //ESTRUTURA DO ALUNO
    char nome[40];
    int ra, prova1, prova2, prova3;
}TipoAluno;

int main(){

int i, maiorNotaPrimeira=0;
float maiorMedia=0, menorMedia=999, media;

TipoAluno aluno[5], alunoMaiorPrimeira, alunoMaiorMedia, alunoMenorMedia;

    for(i=0; i<5; i++){

    //ESTRUTURA PARA LER OS DADOS DO ALUNO
    fflush(stdin);
    printf("Informe o nome do aluno: ");
    scanf("%s", &aluno[i].nome);
    printf("Informe o RA do aluno: ");
    scanf("%i", &aluno[i].ra);

    //ESTRUTURA PARA LER AS PROVAS
    printf("Digite a nota da prova 1: ");
    scanf("%i", &aluno[i].prova1);
    printf("Digite a nota da prova 2: ");
    scanf("%i", &aluno[i].prova2);
    printf("Digite a nota da prova 3: ");
    scanf("%i", &aluno[i].prova3);
    printf("\n\n");

    //ATUALIZAÇÃO DA MAIOR NOTA DA PROVA 1
    if(aluno[i].prova1>maiorNotaPrimeira){
    maiorNotaPrimeira = aluno[i].prova1;
    alunoMaiorPrimeira = aluno[i];
    }
    //MEDIAS DOS ALUNOS
    media =(float) (aluno[i].prova1+aluno[i].prova2+aluno[i].prova3)/3;
    printf("\n MEDIA DO ALUNO E: %.2f\n", media);

    //CONDIÇÃO APROVADO OU REPROVADO
    if(media>6)printf("\nAPROVADO!!");
    else printf("REPROVADO!!");
    system("cls");

    //ALUNO MAIOR/MENOR MÉDIA GERAL
    if(media>maiorMedia){
        maiorMedia=media;
        alunoMaiorMedia=aluno[i];
        }
    if(media<menorMedia){
        menorMedia=media;
        alunoMenorMedia=aluno[i];
        }

    }
    printf("\nO nome do aluno com a MAIOR nota da prova1 %s sua nota e %i", alunoMaiorPrimeira.nome, maiorNotaPrimeira);
    printf("\nO aluno com a MAIOR media geral e %s e a sua nota e %.2f", alunoMaiorMedia.nome, maiorMedia);
    printf("\nO aluno com a MENOR media geral e %s e a sua nota e %.2f", alunoMenorMedia.nome, menorMedia);
    return 0;
}
