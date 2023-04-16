/* Дан двумерный целочисленный массив с рандомными числами. Написать программу, говорящую
пользователю, строку и столбец, где расположен искомый им элемент.
Требование: поиск должен быть написан через функцию.
Примечание. Здесь Вы можете дать пользователю список всех доступных элементов, он выберет и 
начнется поиск по двумерному массиву. */

// #include <stdio.h>  
// #include <locale.h> 
// #include <stdbool.h>

int digitsarr[][3] = 
    {
    2,3,6,
    7,5,8,
    9,8,11
    };

void here_are_digits() {
    int first = 0;
    int second = 0;
    printf("Here are your elements. Choose one of 'em: \n");
    while(true){
    printf("%d ", digitsarr[first][second]);
    if(first == 2 && second == 2)
        break;
    if(second == 2){ 
        second = 0;
        first++;
        printf("\n"); }
    else
        second++;
}
}

void wheres_your_digit(){
    int first = 0;
    int second = 0;
    int yourdig;
    printf("\nEnter a number you've chosen: ");
    scanf("%d", &yourdig);
    for(int i = 0; i < 9; i++){
        if(digitsarr[first][second] == yourdig)
            printf("String - %d, column - %d\n", first + 1, second + 1);
        if(second == 2){ 
        second = 0;
        first++;
        }
    else
        second++;
    }
}