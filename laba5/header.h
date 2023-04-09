#include <stdio.h>  
#include <locale.h> 
#include <stdbool.h>

// TASK 1

int relationA (float x, float y) {
    bool res1 = (x > 4 && y > 3) || ((x < 4 && y < 3) && (y <= -x));
    printf("%d, where 1 - a point belongs to the A graph, 0 - it doesn't. For (%f, %f)\n", res1, x, y);
    return 0;
}


int relationB (float x, float y) {
    if(((x - 5)*(x - 5)) + ((y - 5)*(y - 5)) >= 25) {
        if (((x <= 5 && x >= 0) && (y <= 5 && y >= 0)) || (((x - 5)*(x - 5)) + ((y - 5)*(y - 5)) == 25))
            printf("A point belongs to the B graph. For (%f, %f)\n", x, y); 
        }
    else
        printf("A point doesn't belong to the B graph.For (%f, %f)\n", x, y);
    return 0;
    }



// TASK 2
void getInput() {
    char str[20];
    for (int i = 0; i < 20; i++){
        str[i] = 0;
    }
    printf("Write something down: ");
    scanf_s("%s", &str, 19);
    return str;
}


int testInput(char* str1)
{
    for (int i = 0; str1[i] != 0 && i < 20; i++) {
        if (str1[0] == '0' || str1[0] == '-') continue;
            if (!('0' < str1[i] && str1[i] <= '9')) { return 0;}
 }
    return 1;
}


int strToInt(char* str1)
{
    int f = 0, a = 0;
    for (int i = 0; str1[i] != 0 && i < 20; i++)
    {
        if (str1[i] == '-') { f = 1;}
        else a = a * 10 + (str1[i] - '0');
        }
        if (f == 1) { a *= -1; }
    return a;
}


void printInt(int a)
{
 printf("\n%d\n", a);
}