#include <stdio.h>

// Function declaration
int myFunction(int, int);

// The main method
int main() {  
  int result = myFunction(50, 40);  // call the function
  printf("Result is = %d", result);
  
  return 0;
}

// Function definition
int myFunction(int x, int y) {
  return x* y;
}