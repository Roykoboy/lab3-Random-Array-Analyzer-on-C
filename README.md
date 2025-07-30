# Random Array Analyzer
## Description
A simple C program that generates an array of random numbers and counts how many times a user-specified number appears in the array.

## Features
  * Generates an array of 100 random integers between 0 and 9

  * Prints the generated array

  * Allows user to input a number (0-9) to search for

  * Counts and displays occurrences of the specified number in the array

## What I Learned
  * Working with arrays in C

  * Generating random numbers using rand() and srand()

  * Implementing basic array operations (filling, printing)

  * Creating functions to modularize code

  * User input handling with scanf_s()

  * Basic program flow control
## Example Output
```
  Массив: 3 7 2 8 1 4 5 9 0 2 ...
  Введите число a от 0 до 9: 2
  Количество включений числа 2 в массиве: 12
```
## Code:
```C
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
```
