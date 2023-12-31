#include <stdio.h> 
#include <stdlib.h> 
 
 
int main (int argc, const char* argv[]) { 
  int n; // Integer read from the command line goes here. 
 
  if (argc < 2) { // Check that there was an entry 
    printf("Must enter a number on the command line!\n"); 
    return 1; // Indicate failure 
  } 
 
  n = atoi(argv[1]); // Get string from command line; convert to int 
  printf("The number you entered was: %d\n", n); 
  return 0; // Indicate success! 
}
