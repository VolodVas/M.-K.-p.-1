#include <stdio.h>
#include <math.h>

int main() {
    double x, y, f;
    int continueProgram;

    do {
        // Введення значень x та y
        printf("Введіть значення x: ");
        while (scanf("%lf", &x) != 1 || x < 0) { // Перевірка на коректність та x >= 0 для sqrt(x)
            printf("Некоректне введення. 'x' має бути дійсним числом і не менше 0. Спробуйте ще раз: ");
            while (getchar() != '\n'); // Очищення буфера вводу
        }

        printf("Введіть значення y: ");
        while (scanf("%lf", &y) != 1) { // Перевірка на коректність
            printf("Некоректне введення. 'y' має бути дійсним числом. Спробуйте ще раз: ");
            while (getchar() != '\n'); // Очищення буфера вводу
        }

        // Перевірка, щоб sqrt(x) + y != 0
        if (sqrt(x) + y == 0) {
            printf("Помилка: значення sqrt(x) + 'y' не повинно дорівнювати 0.\n");
        } else {
            // Обчислення значення функції f
            f = ((x * x) + (y * y)) / (sqrt(x) + y);
            printf("Значення функції f = ((x*x) + (y*y)) / (sqrt(x) + y) дорівнює: %.2lf\n", f);
        }

        // Меню для продовження або завершення програми
        printf("Продовжити? (Так, введіть 1) (Ні, введіть 0): ");
        while (scanf("%d", &continueProgram) != 1 || (continueProgram != 0 && continueProgram != 1)) {
            printf("Некоректне введення. Введіть 1 для продовження або 0 для завершення: ");
            while (getchar() != '\n'); // Очищення буфера вводу
        }

    } while (continueProgram == 1);

    printf("Програму завершено.\n");

    return 0;
}

