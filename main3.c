#include <stdio.h>
#include <math.h>

int main() {
    double a, f;
    int continueProgram;

    do {
        // Введення значення a
        printf("Введіть дійсне число a: ");
        while (scanf("%lf", &a) != 1) { // Перевірка на коректність введення
            printf("Некоректне введення. a має бути дійсним числом. Спробуйте ще раз: ");
            while (getchar() != '\n'); // Очищення буфера вводу
        }

        // Обчислення значення функції f(a)
        if (a > 0) {
            f = a * a + 5 * a - 6;
        } else {
            f = fabs(a + cos(a));
        }

        // Виведення результату
        printf("Значення функції f(a) дорівнює: %.2lf\n", f);

        // Меню для продовження або завершення програми
        printf("Продовжити? (Так, введіть 1) (Ні, введіть 0): ");
        while (scanf("%d", &continueProgram) != 1 || (continueProgram != 0 && continueProgram != 1)) {
            printf("Некоректне введення. Спробуйте ще раз: ");
            while (getchar() != '\n'); // Очищення буфера вводу
        }

    } while (continueProgram == 1);

    printf("Програму завершено.\n");

    return 0;
}
