/*Поменять в целом положительном числе (типа int) значение третьего
бита на введенное пользователем число (изначальное число также
вводится с клавиатуры)*/
#include <stdio.h>
int main() {
    int number;
    int bit;
    printf("Введите целое положительное число: ");
    scanf("%d", &number);
    printf("Введите значение (0 или 1) для установки в третий бит: ");
    scanf("%d", &bit);
    number = (number & ~(1 << 2)) | (bit << 2);
    printf("Результат: %d\n", number);
    return 0;
}

