//Exercício - Medidas

#include <stdio.h>
#include <math.h>

int main() {

    double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &A);

    printf("Digite a medida B: ");
    scanf("%lf", &B);

    printf("Digite a medida C: ");
    scanf("%lf", &C);

    areaQuadrado = pow(A, 2.0);
    areaTriangulo = (A * B) / 2.0;
    areaTrapezio = (A + B) / 2.0 * C;

    printf("Area do quadrado = %.4lf\n", areaQuadrado);
    printf("Area do triangulo = %.4lf\n", areaTriangulo);
    printf("Area do trapezio = %.4lf\n", areaTrapezio);

    return 0;

}