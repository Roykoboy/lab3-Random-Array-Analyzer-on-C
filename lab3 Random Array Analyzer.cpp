#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>

#define ARRAY_SIZE 100

int getRandomNumber(int min, int max) {
	return min + rand() % (max - min + 1);
}

void fillArray(int array[], int size, int min, int max) {
	for (int i = 0; i < size; i++) {
		array[i] = getRandomNumber(min, max);
	}
}

void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int countOccurrences(int array[], int size, int a) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (array[i] == a) {
			count++;
		}
	}
	return count;
}

int main() {
	setlocale(0, "Rus");
	int array[ARRAY_SIZE];
	int a;


	srand(time(NULL));
	fillArray(array, ARRAY_SIZE, 0, 9);


	printf("Массив: ");
	printArray(array, ARRAY_SIZE);


	printf("Введите число a от 0 до 9: ");
	scanf_s("%d", &a);


	int occurrences = countOccurrences(array, ARRAY_SIZE, a);


	printf("Количество включений числа %d в массиве: %d\n", a, occurrences);

	return 0;
}