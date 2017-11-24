#include <stdio.h>
#include <math.h>

typedef struct aluno {
    char nome[256];
    int ra;
    float p1;
    float p2;
    float p3;

} aluno;

float media(aluno a) {
    return (a.p1 + a.p2 + a.p3) / 3.0;
}
int main() {
    FILE * lista_alunos = fopen("lista_alunos.txt", "r");
    FILE * media_alunos = fopen("media_alunos.txt", "w");    
    aluno a = {};    
    while(fscanf(lista_alunos, "%s %d %f %f %f\n", a.nome, &(a.ra), &(a.p1), &(a.p2), &(a.p3)) != EOF) {    
        fprintf(media_alunos, "%s %d %f %f %f %f\n", a.nome, a.ra, a.p1, a.p2, a.p3, media(a));
    }

    fclose(lista_alunos);
    fclose(media_alunos);
    return 0;
}