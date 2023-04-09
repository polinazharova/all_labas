#include "header.h"

void main() {
// Проверяем принадлежность точки графику при разных значениях x, y
    relationA(0,0);
    relationA(4,4);
    relationA(7.2,5);
    relationA(10,11);
    relationA(-2,2);
    relationA(-7,0);
    relationA(-4.5,7.5);
    relationA(100,100);
    relationA(3,2);
    relationA(-5,-5);
    relationB(0,0);
    relationB(1,1);
    relationB(5,5);
    relationB(5,10);
    relationB(10,5);
    relationB(-3,0);
    relationB(-5,4);
    relationB(-12,20);
    relationB(3,-34);
    relationB(5.5,5);
    float a,b;
    printf("Write down x: ");
    scanf("%f", &a);
    printf("Write down y: ");
    scanf("%f", &b);
    relationA(a,b);
    relationB(a,b);
    getInput();
}


