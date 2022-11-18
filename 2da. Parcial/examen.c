/******************************************************************************
Adolfo Angel Perez Salado
3°D

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

void bubble(int num1[], unsigned int size);
void swap(int *pseudo1, int *pseudo2);

int main() {
    printf("EXAMEN SEGUNDA PARCIAL\n");
	unsigned int n = 10;
    printf("LOS VALORES SON LOS SIGUIENTES\n");
	int list[] = {
        
        5, 2, 3, 1, 2, 4, 7, 9, 0, 6
        
    };
	bubble(list, n);
	for (int i = 0; i < n; i++) 
		printf("%d\n", list[i]);
	return 0;
}

void bubble(int num1[], unsigned int size) {
	for (int i = 0; i < size - 1; i++) {
		unsigned int min = i;
		for (int j = i+1; j < size; j++) {
			if (num1[j] < num1[min]) 
				min = j;
		}
		if (min != i) 
			swap(&num1[min], &num1[i]);
	}
}

void swap(int* pseudo1, int* pseudo2) {
	int resultado = *pseudo1;
	*pseudo1 = *pseudo2;
	*pseudo2 = resultado;
}