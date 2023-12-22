#include <stdio.h>
#include <stdlib.h>
#include "calcGrades.h"


/* Function that calculates the average, minimum, and maximum grades. 
 * Created by <Emre Sunar, esunar>
 */

int calcGrades(int numGrades, int grades[]) { // The number of grades in the array and the array itself.
    int min = grades[0];
    int max = grades[0];
    int sum = 0;
    for (int i = 0; i < numGrades; i++) {
        sum += grades[i]; // Adding up all the grades
        if (grades[i] < min) { //Loops through all grades and determines the smallest grade
            min = grades[i]; //Sets the smallest grade
        }
         if (grades[i] > max) { //Loops through all grades and determines the largest grade
            max = grades[i]; //Sets the largest grade
        }
    }
    printf("The average grade is: %d\n", sum / numGrades); //Printing average by dividing the sum by number of grades
    printf("The smallest grade is: %d\n", min); //Printing smallest grade
    printf("The largest grade is: %d\n", max); //Printing largest grade
}
 
