#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "");
    double X;
    double L;

    printf("������� ����� ��������� �� ���� X (��): ");
    scanf("%lf", &X);

    printf("������� ����� ���� L (��): ");
    scanf("%lf", &L);
    double time_seconds = X / 1000.0;
    double step_meters = L / 100.0;
    double min_velocity = step_meters / time_seconds;
    printf("\n--- ���������� ---\n");
    printf("����� ��������� �� ����: %.2f �� = %.4f �\n", X, time_seconds);
    printf("����� ����: %.2f �� = %.4f �\n", L, step_meters);
    printf("����������� ��������: %.4f �/�\n", min_velocity);

    return 0;
}