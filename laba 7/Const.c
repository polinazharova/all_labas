#include <stdio.h>

int main()
{
    const int i = 2;
    const int* ptr1 = &i;
    int* ptr2 = (int*)ptr1;
    *ptr2 = 3;

    printf("i = %d\n", i);
    printf("i = ptr2 = %d", *ptr2);

    return 0;
}

/*
1) Напишите, что выдает Вам эта программа, будь это результат или ошибка. Результат 
логичен?.
Output:
i = 3
i = ptr2 = 3
Результат логичен и нелогичен одновременно. С одной стороны, константа меняться не должна, но, с другой стороны,
мы меняем ее не "в лоб", а путем работы с памятью, поэтому при отсутствии глубоких знаний
о функционировании языка, чисто теоретически можно предположить, что это сработает.

2) Запустите эту программу также в онлайн компиляторе gcc. Результат тот же?
Output:
i = 2
i = ptr2 = 3
Онлайн-компилятор выдает константу в неизменном виде.

3) Исследуйте и ответьте , что такое Неопределенное поведение (Undefined Behaviour) в 
программировании?
Неопределенное поведение - это поведение при компиляции программы, в которой
присутствуют строчки кода, результат выполнения которых не
предусмотрен стандартами и не указан однозначно. Соответственно, результат компиляции
таких строк невозоможно предугать, и он будет зависеть от
вида/версии/настроек компилятора, операционной системы, функционирования памяти
и т.д. Это явление наиболее характерно для языков C. Таких ситуаций необходимо избегать.
*/