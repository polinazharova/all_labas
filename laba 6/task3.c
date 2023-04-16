// Вам необходимо реализовать 3 классические функции для одномерных массивов int на языке С:
// 1) Отобразить массив на экране (print)
// 2) Вставить элемент в конец массива (append)
// 3) Вставить элемент в середину массива (insert)
// Существует 2 варианта реализации:
// • (статический массив) Спрашивать пользователя максимальный размер массива и сколько 
// элементов он хочет заполнить. Тогда необходимо написать условия, чтобы пользователь 
// сам не вышел за пределы выделенной памяти.
// • (динамический массив) Спрашивать пользователя только о количестве элементов в 
// массиве. Тогда память под него будет выделять заново динамически (перевыделение 
// памяти), и у пользователя будет свобода использовать append, insert сколько он хочет.
// Можно выбрать любую тактику.
// Написать данную программу с требованиями
// 1) Написать в начале программы номер тактики и придерживаться ее
// 2) Print, append, insert — только функции
// 3) Написать 1 scanf на append, insert для пользователя (и print чтобы ему показать)
// 4) Написать по 5 тестов для append и insert в виде кода с объяснениями в комментариях, что 
// Вы проверяете

#include <stdio.h>  
#include <locale.h> 
#include <stdbool.h>
#include <stdlib.h>

//DYNAMIC METHOD

int *mass;
int n;

void workingwitharray(){
    scanf("%d", &n);
    mass = malloc( sizeof(int) * n );
    for(int i = 0; i < n; i++){
        mass[i] = rand() % 100;
        printf("%d\n", mass[i]);
        }
    
}

void append(int a){
    mass = realloc(mass, sizeof(int) * n+1);
    mass[n] = a;
}

void print(){
   int p = 0;
   printf("\nYour array is ");
     while(true){
         if (p >= n)
             break;
         printf("%d ", mass[p]);
         p++;
     }
 }

void insert(int a, int b){
    mass[a] = b;
    
    int n;
    int new;
    printf("\nPut the number of digit to be changed: ");
    scanf("%d", &n);
    printf("\nPut your new number: ");
    scanf("%d", &new);

    mass[n-1] = new;
    
}

//massive = realloc(massive, sizeof(int) * n)

void main(){
    workingwitharray();
    print();
    insert(1,5);
    print();
    append(10);
    print();






//    int n;
//     int new;
//     printf("Put the number of digit to be changed: ");
//     scanf("%d", &n);
//     printf("Put your new number: ");
//     scanf("%d", &new);
//    int n;
//     int new;
//     printf("Put the number of digit to be changed: ");
//     scanf("%d", &n);
//     printf("Put your new number: ");
//     scanf("%d", &new)
}

