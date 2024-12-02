#include <stdio.h>  // Підключення бібліотеки вводу/виводу
#include <math.h>   // Підключення бібліотеки для математичних функцій

int main () { //Підключення головної функції

    float f, a, b, c, lambda, M_PI; //Введення змінних
    printf("Input a, b, c, lambda and M_PI:\n"); //Виведення тексту на екран
    scanf_s("%f %f %f %f %f", &a, &b, &c, &lambda, &M_PI);
    f = cbrt(c * b - fabs(a / c)) / (log(b) - tan(a + M_PI)) + lambda * c - pow(8, 23); // Обчислення формули
    printf("result: %f\n", f); // Виведення тексту на екран

    return 0; // Успішне завершення програми
}