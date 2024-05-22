#include <stdio.h>
#include <math.h>

int main() {
    double hypotenuse, cathetus1, cathetus2, area;
    int choice; // змінна для зберігання вибору користувача
do {
    // Введення значення гіпотенузи
    printf("Введіть значення гіпотенузи: ");
    while (scanf("%lf", &hypotenuse) != 1 || hypotenuse <= 0) {
        printf("Некоректне введення. Гіпотенуза має бути додатнім числом. Спробуйте ще раз: ");
        while (getchar() != '\n'); // Очищення буфера вводу
    }

    // Введення значення одного з катетів
    printf("Введіть значення одного з катетів: ");
    while (scanf("%lf", &cathetus1) != 1 || cathetus1 <= 0 || cathetus1 >= hypotenuse) {
        printf("Некоректне введення. Катет має бути додатнім числом і меншим за гіпотенузу. Спробуйте ще раз: ");
        while (getchar() != '\n'); // Очищення буфера вводу
    }

    // Обчислення другого катета за теоремою Піфагора
    cathetus2 = sqrt(hypotenuse * hypotenuse - cathetus1 * cathetus1);

    // Обчислення площі трикутника
    area = 0.5 * cathetus1 * cathetus2;

    // Виведення результатів
    printf("Другий катет дорівнює: %.2lf\n", cathetus2);
    printf("Площа трикутника дорівнює: %.2lf\n", area);

    // Консольне меню
    printf("\nБажаєте продовжити? (Tак, введіть 1 / Hі, введіть 0): ");
    while (scanf("%d", &choice) != 1 || (choice != 0 && choice != 1)) {
        printf("Некоректне введення. Спробуйте ще раз: ");
        while (getchar() != '\n'); // Очищення буфера вводу
    }
    printf("\n");
} while (choice == 1);
    return 0;
}
