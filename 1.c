/*Вывести двоичное представление целого положительного числа,
используя битовые операции (число вводится с клавиатуры).*/
#include <stdio.h>
void printBinary(int n) {
   int size = sizeof(n) * 8;
   for(int i = size - 1; i >= 0; i--) {
   int bit = (n >> i) & 1;
   printf("%d", bit);
    }
    
    printf("\n");
}

int main() {
    int num;
    printf("Введите положительное целое число: ");
    scanf("%d", &num);
    
    printf("Двоичное представление числа: ");
    printBinary(num);
    
    return 0;
}

