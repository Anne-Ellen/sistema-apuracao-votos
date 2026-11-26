#include <stdio.h>

int main() {

    int votos[2][5];
    int contagemVotos[2] = {0, 0};
    int turma, eleitor;
    float perAna, perCaio;

    for (turma = 0; turma < 2; turma++){
        for (eleitor = 0; eleitor < 5; eleitor++){
            printf("Turma %d - eleitor %d\n", turma + 1, eleitor + 1);
            printf("Digite 1 para Ana ou 2 para Caio: ");
            scanf("%d", &votos[turma][eleitor]);
        }
    }
    
    

    for (turma = 0; turma < 2; turma++){
        for (eleitor = 0; eleitor < 5; eleitor++){
            if (votos[turma][eleitor] == 1){
                contagemVotos[0]++;
            }else if (votos[turma][eleitor] == 2){
                contagemVotos[1]++;
            }
        }
    }

    perAna = contagemVotos[0] * 100.0 / 10;
    perCaio = contagemVotos[1] * 100.0 / 10;

    printf("\nAna: %d votos (%.2f%%)\n", contagemVotos[0], perAna);
    printf("\nCaio: %d votos (%.2f%%)\n", contagemVotos[1], perCaio);

    if (contagemVotos[0] > contagemVotos[1]){
        printf("Ana venceu por %.2f%% pontos percentuais\n", perAna - perCaio);
    }
    else if (contagemVotos[1] > contagemVotos[0]){
        printf("Caio venceu por %.2f%% pontos percentuais\n", perCaio - perAna);
    }
    else {
        printf("Empate\n");
    }

    return 0;
}

