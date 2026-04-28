#include <stdio.h>

int main() {
    int opcao;
    float nota1 = 0, nota2 = 0, media = 0;
    int notasInseridas = 0;
    int mediaCalculada = 0;

    do {
        printf("\n==============================\n");
        printf("     SISTEMA EQUIPE XYZ\n");
        printf("==============================\n");
        printf("1 - Inserir notas\n");
        printf("2 - Calcular media\n");
        printf("3 - Verificar situacao\n");
        printf("4 - Exibir resultado\n");
        printf("5 - Calcular derivada\n");
        printf("6 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a primeira nota: ");
                scanf("%f", &nota1);
                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);
                notasInseridas = 1;
                mediaCalculada = 0;
                break;

            case 2:
                if (notasInseridas) {
                    media = (nota1 + nota2) / 2;
                    mediaCalculada = 1;
                    printf("Media calculada: %.2f\n", media);
                } else {
                    printf("Insira as notas primeiro!\n");
                }
                break;

            case 3:
                if (notasInseridas && mediaCalculada) {
                    if (media >= 7)
                        printf("Situacao: Aprovado\n");
                    else if (media >= 5)
                        printf("Situacao: Recuperacao\n");
                    else
                        printf("Situacao: Reprovado\n");
                } else if (!notasInseridas) {
                    printf("Insira as notas primeiro!\n");
                } else {
                    printf("Calcule a media primeiro!\n");
                }
                break;

            case 4:
                if (notasInseridas && mediaCalculada) {
                    printf("\n--- RESULTADO ---\n");
                    printf("Nota 1:   %.2f\n", nota1);
                    printf("Nota 2:   %.2f\n", nota2);
                    printf("Media:    %.2f\n", media);
                    if (media >= 7)
                        printf("Situacao: Aprovado\n");
                    else if (media >= 5)
                        printf("Situacao: Recuperacao\n");
                    else
                        printf("Situacao: Reprovado\n");
                } else if (!notasInseridas) {
                    printf("Insira as notas primeiro!\n");
                } else {
                    printf("Calcule a media primeiro!\n");
                }
                break;

            case 5:
                printf("Opcao 5 selecionada.\n");
                break;

            case 6:
                printf("Saindo do sistema...\n");
                break;

            default:
                if (opcao < 1) {
                    printf("Opcao invalida! Digite um numero maior que 0.\n");
                } else {
                    printf("Opcao invalida! Digite um numero entre 1 e 6.\n");
                }
        }

    } while (opcao != 6);

    return 0;
}