#include<stdio.h>

/* This Programm is to reverse array */

void reverse(char array[]);

#define LENGTH 11

void main() {
	char array[LENGTH] = {65, 66, 67, 68, 69, 70, 71, 72, 73, 74};
	printf("Original_array: %s\n", array);
	reverse(array);

	printf("Reversed_array: %s\n", array);
}

void reverse(char array[]){
	char temp_arr;

	for (int i = 0; i < (LENGTH-1)/2; i++){
		temp_arr = array[i];
		array[i] = array[(LENGTH-2)-i];
		array[(LENGTH-2)-i] = temp_arr;
 	}
}
