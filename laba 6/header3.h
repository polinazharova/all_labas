/*
Вам необходимо реализовать 3 классические функции для одномерных массивов int на языке С:
1) Отобразить массив на экране (print)
2) Вставить элемент в конец массива (append)
3) Вставить элемент в середину массива (insert)
Существует 2 варианта реализации:
• (статический массив) Спрашивать пользователя максимальный размер массива и сколько 
элементов он хочет заполнить. Тогда необходимо написать условия, чтобы пользователь 
сам не вышел за пределы выделенной памяти.
• (динамический массив) Спрашивать пользователя только о количестве элементов в 
массиве. Тогда память под него будет выделять заново динамически (перевыделение 
памяти), и у пользователя будет свобода использовать append, insert сколько он хочет.
Можно выбрать любую тактику.
Написать данную программу с требованиями
1) Написать в начале программы номер тактики и придерживаться ее
2) Print, append, insert — только функции
3) Написать 1 scanf на append, insert для пользователя (и print чтобы ему показать)
4) Написать по 5 тестов для append и insert в виде кода с объяснениями в комментариях, что 
вы проверяете.
*/


#include <stdio.h>  
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h> 

//DYNAMIC METHOD

int *mass;
int n;

// Спрашиваем из скольких элементов состоит массив и рандомим в него числа
void workingwitharray(){
    printf("How many numbers is gonna be there in your array? ");
    scanf("%d", &n);
    mass = (int*)malloc( sizeof(int) * n );
    for(int i = 0; i < n; i++){
        mass[i] = rand() % 100;
        }
}

// Расширяем память, занимаемую массивом на вес одного int 
void append(int a){
    mass = (int*)realloc(mass, sizeof(int) * (n+1));
    mass[n] = a;
    n++;
    print();
}

// С помощью цикла выводим массив
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

// Замена рандомного элемента на рандомное значение
void insert(int a, int b){
    mass[a] = b;
    print();
    
}



