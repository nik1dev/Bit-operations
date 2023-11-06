/*Найти количество единиц в двоичном представлении целого
положительного числа (число вводится с клавиатуры). */
#include <stdio.h>
void printBinary(int n) {
   int k = 0;
   int size = sizeof(n) * 8;
   for(int i = size - 1; i >= 0; i--) {
   int bit = (n >> i) & 1;
   printf("%d", bit);
   if (bit==1) {
   k++;
    }
    }
    printf("\n");
    printf("Количество единиц в двоичном представлении числа %d %d",n,k);

}
int main() {
    int num;
    printf("Введите положительное целое число: ");
    scanf("%d", &num);
    
    printf("Двоичное представление числа: ");
    printBinary(num);
    
    return 0;
}

