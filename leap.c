#include <stdio.h>
#include <stdlib.h>

/* Program that interprets a year and determines if it is a leap year
 * Created by <Emre Sunar, esunar>
 *
 * Usage:
 *  ./leap some_year
 * Example:
 *  ./leap 2303
 *
 */

int main(int argc, const char* argv[]){

  int x; //Integer read from the command line goes here.

  
  // Check that there was an entry.
  if (argc < 2) { 
    printf("Must enter a year on the command line!\n");
    return 1; // Indicate failure
  }
  
  // Check if there is more than one year entered on the command line.
  if (argc > 2) { 
    printf("Must enter only a single year on the command line!\n");
    return 1; // Indicate failure
  }
  
  x = atoi(argv[1]); // Changing the value entered on the command line into an integer.
  
  //Check if this year is within the range in which this program is designed to handle.
  
  if (x < 1752){  
    printf("This program cannot test the year %d. It only handles the year 1752 and after.\n", x); 
    return 1; //Indicate failure
  }
 
  //Checks if the year is divisible by 4 and 100 or 400 to determine if it is a leap year.
  //If the year is divisible by 4 it is leap year unless it is also divisble by 100 in which case it also has to be divisible by 400 to make it a leap year.
  if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0)){
    printf("The year %d is a leap year.\n", x); 
  }
  else{
    printf("The year %d is a common year.\n", x);
  }
 return 0; //Indicating success
}
