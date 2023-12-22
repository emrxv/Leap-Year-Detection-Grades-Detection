Emre Sunar

num.c: 

/* Very simple program to demo reading a number from the command line. 
 * Created by <Emre Sunar, esunar>
 *
 * Usage:
 *  ./num some_number
 * Example:
 *  ./num 2303
 *
 */
 
 
grades.c: 
MAX_GRADES = 20

/* Program that interprets values, stores them into an array, and then outputs the average, maximum, and minimum grades
 * Created by <Emre Sunar, esunar> 
 * 
 * Usage: 
 *   ./grades some_grade some_grade some_grade
 * Example:
 *  ./grades 56 98 76 8 47 88 71
 * 
 */
 

calcGrades.c: 

/* Function that calculates the average, minimum, and maximum grades. 
 * Created by <Emre Sunar, esunar>
 */

leap.c: 

/* Program that interprets a year and determines if it is a leap year
 * Created by <Emre Sunar, esunar>
 *
 * Usage:
 *  ./leap some_year
 * Example:
 *  ./leap 2303
 *
 */
 
To compile:

1. Open the terminal
2. Enter "make" to start the makefile which should compile the code
3. Execute any of the programs with dot and a slash in the format provided. 
 

num.c: 

Entered: 2303

Expected: The number you entered was: 2303
		
Entered: 200 300 400

Expected: The number you entered was: 200

grades.c: 

Entered: 1, 2, 3, 4, 5

Expected: 

The number of numbers entered was: 5
The numbers you entered were: 1 2 3 4 5 
The average grade is: 3
The smallest grade is: 1
The largest grade is: 5

Entered:

Expected: Must enter a number on the command line!

Entered: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 

Expected: 

The number of numbers entered was: 21
Too many values in this array! Please enter 20 numbers.

leap.c: 

Entered: 1752

Expected: The year 1752 is a leap year.

Entered: 1751

Expected: This program cannot test the year 1751. It only handles the year 1752 and after.

Entered: 1950

Expected: The year 1950 is a common year. 

Entered:

Expected: Must enter a year on the command line! 

Entered: 1800 2800 

Expected: Must enter only a single year on the command line!

