#include "max.h"
#include <assert.h>
#include <stdio.h>

int max(int *numbers, int size) {
  // Excercise 2
  // Implement your code below...

//precondition: The input must be an array of numbers with the size of int size. 
//postcondition: the function must return the highest value in the array.

//assert(sizeof(numbers) == size); // checks that the size of the array is equal to the integer size

int numMax = 0; // variable to store the highest number in the array 

numMax = numbers[0]; // set the highest number in array to the first number 

for(int i = 1; i < size; i++){ //loop through the array, starting from index 1
  if (numbers[i] > numMax){   
    numMax = numbers[i];  // if the current number is larger than the largest number, change the largest number to the current number 
  }


}

  return numMax; 
  
}

#ifndef TEST

int main() {

	return 0;
}

#endif
