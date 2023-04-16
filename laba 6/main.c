#include "header1.h"
#include "header2.h"
#include "header3.h"


void main(){
    // TASK 1
    printf("TASK 1\n");
    finding();

    // TASK 2
    printf("\nTASK 2\n");
    here_are_digits();
    wheres_your_digit();

    // TASK 3. Для теста берем массив длиною 5.
    printf("TASK 3\n");
    workingwitharray();
    print();
    // тут меняются числа по индексу в массиве
    insert(100,100); // берем несуществующую ячейку и убеждаемся, что ничего не изменилось
    insert(3,800000000); // просто берем рандомное большое число
    insert(0,-1); // отрицательное значение
    insert(2,24.9); // число с плавающей точкой. дробная часть отбрасывается
    insert(4,10); // в конец добавляем 10
    
    append(11); // в конец добавляем по порядку возрастающие числа, все работает
    append(12);
    append(13);
    append(14);
    append(15);
    
    int newnum;
    printf("\nPut your new number to append: ");
    scanf("%d", &newnum);
    append(newnum);
    
    int new1;
    int new2;
    printf("\nPut a number of a digit to be changed: ");
    scanf("%d", &new1);
    printf("\nPut your new number: ");
    scanf("%d", &new2);
    insert(new1-1, new2);

    // Очищаем занятую массивом память
    free(mass);
}