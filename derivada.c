#include <stdio.h>

int main(){
    float a, b, c;
    
    printf("==== DERIVADA DE FUNCAO SIMPLES ====\n\n");
    printf("Modelo de funcao: f(x) = ax^2 + bx + c");
    printf("Indique os coeficientes a, b e c da funcao: \n");
    
    printf("Coeficiente a: ");
    scanf("%f", &a);
    printf("Coeficiente b: ");
    scanf("%f", &b);
    printf("Coeficiente c: ");
    scanf("%f", &c);

    printf("\nFuncao f(x) = %.1f x^2 + %.1f x + %.1f\n", a, b, c);

    printf("Derivada f'(x) = %.1f x + %.1f", a * 2, b);

    return 0;
}