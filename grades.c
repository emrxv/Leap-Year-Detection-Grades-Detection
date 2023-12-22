#include <stdio.h> 
#include <stdlib.h> 
#include "calcGrades.h"
#define MAX_GRADES (20) //Define size of array
 
/* Program that interprets values, stores them into an array, and then outputs the average, maximum, and minimum grades
 * Created by <Emre Sunar, esunar> 
 * 
 * Usage: 
 *   ./grades some_grade some_grade some_grade
 * Example:
 *  ./grades 56 98 76 8 47 88 71
 * 
 */
 
int main (int argc, char* argv[]) { 

  int n[MAX_GRADES]; // Integers stored in this array
  int numVals = argc - 1;
 
  if (argc < 2) { // Check that there was an entry 
    printf("Must enter a number on the command line!\n");
    return 1; // Indicate failure 
  } 
	printf("The number of numbers entered was: %d\n", argc - 1); //Prints the number of grades
  
  if (argc > MAX_GRADES + 1) { // Check if number of values exceeds array size
   	printf("Too many values in this array! Please enter %d numbers.\n", MAX_GRADES);
   	return 1; //Indicate failure
   	} 
   for(int i = 1; i < argc; i++) {
 	n[i-1] = atoi(argv[i]); //Adding the values to the array
 	}
 		
   printf("The numbers you entered were: " ); 
   for(int i = 0; i < argc - 1; i++) { 
  	 printf("%d ", n[i]); //Printing the values of the array
  	 }
  	printf("\n");
  		
  		calcGrades(numVals, n); //Passes parameters needed for calcGrades function
  		return 0; //Indicate success
}
