#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap_nums(int* x, int* y);
void swap_pointers(char** x, char** y);

int main(int argc, char* argv[]){
	int a, b;
	char* s1 = (char*)malloc(200 * sizeof(char));
	char* s2 = (char*)malloc(200 * sizeof(char));
	a = 3; b = 4;
	swap_nums(&a, &b);
	printf("a is %d\n", a);
	printf("b is %d\n", b);
	strcpy(s1, "I should print second");
	strcpy(s2, "I should print first");
	swap_pointers(&s1, &s2);
	printf("s1 is %s\n", s1);
	printf("s2 is %s\n", s2);
	free(s1);
	free(s2);
	return 0;
}
/*
тут все в порядке
*/
void swap_nums(int* x, int* y){
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

/*
тут нужно было передавать параметры по адресам, а не значениям, чтобы они менялись не локально.
*/
void swap_pointers(char** x, char** y){
	char* tmp = *x;
	*x = *y;
	*y = tmp;
}
