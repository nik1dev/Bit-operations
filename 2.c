/*Вывести двоичное представление целого отрицательного числа,
используя битовые операции (число вводится с клавиатуры).*/
#include<stdio.h>
void printBinary(int num)
{
    int i;
    if (num>0){
printf("Вы ввели положительное число: ");
}   
    else {
    printf("Двоичное представление: ");
    int size = sizeof(num) * 8;
    for(i = size - 1; i >= 0; i--)
    {
        int shiftedNum = num >> i;
        if(shiftedNum & 1)
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}
}
int main()
{
    int number;
    printf("Введите отрицательное число: ");
    scanf("%d", &number);
    printBinary(number);
    
    return 0;
}
