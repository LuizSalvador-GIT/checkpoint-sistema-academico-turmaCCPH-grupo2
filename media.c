#include <stdio.h>

float calcularMedia(float nota1, float nota2) {
    return (nota1 + nota2) / 2.0;
}

// Media corrigida

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = calcularMedia(nota1, nota2);


    if (media = 6.0) {
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }

    return 0;
}
