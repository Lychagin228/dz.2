#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    double X;
    double L;

    printf("¬ведите врем€ удержани€ на воде X (мс): ");
    scanf("%lf", &X);

    printf("¬ведите длину шага L (см): ");
    scanf("%lf", &L);
    double time_seconds = X / 1000.0;
    double step_meters = L / 100.0;
    double min_velocity = step_meters / time_seconds;
    printf("\n--- –≈«”Ћ№“ј“џ ---\n");
    printf("¬рем€ удержани€ на воде: %.2f мс = %.4f с\n", X, time_seconds);
    printf("ƒлина шага: %.2f см = %.4f м\n", L, step_meters);
    printf("ћинимальна€ скорость: %.4f м/с\n", min_velocity);

    return 0;
}