// Дан символьный массив (размер на Ваш выбор). Напишите программу, находящую максимальную 
// длину непрерывной последовательности, состоящую из введенного пользователем символа в этом 
// массиве (см. пример). Программа выводит число повторений.
// Требование: поиск максимальной последовательности через функцию.
// Пример: 
// Дано: {‘H’, ‘e’, ‘l’, ‘l’, ‘l’, ’o’, ’l’, ‘\0’}
// Пользователь: ‘l’
// Программа: 3

#include <stdio.h>  

void main() {

Finding();

};

void Finding(){
char arr[] = {'H','e','y','y','y','y','W','a','s','s','s','s','s','U','p'};
char yoursym;
printf("Put your one symbol: ");
scanf("%c", &yoursym);
int summa = 0;
    for(int i = 0; i < 15; i++) {
        if (arr[i] == yoursym){
            summa++;
            continue; }
        else if (summa > 0 && arr[i] != yoursym){
            printf("Your summa: %d\n", summa);
            break; } 
    }
if(summa == 0)
    printf("Your symbol isn't there");
}