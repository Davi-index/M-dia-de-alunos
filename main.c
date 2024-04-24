#include <stdio.h>

int main() {
    int i, j, num_alunos;
    float notas[4], soma, media, soma_turma = 0.0, media_turma;

    printf("Digite o número de alunos: ");
    scanf("%d", &num_alunos);

    for(i = 0; i < num_alunos; i++) {
        soma = 0.0;

        printf("\nAluno %d:\n", i+1);
        for(j = 0; j < 4; j++) {
            printf("Digite a nota %d: ", j+1);
            scanf("%f", &notas[j]);
            soma += notas[j];
        }

        media = soma / 4;
        printf("A média das notas do aluno %d é: %.2f\n", i+1, media);
        soma_turma += media;
    }

    media_turma = soma_turma / num_alunos;
    printf("\nA média da turma é: %.2f\n", media_turma);

    return 0;
}
