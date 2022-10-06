//User Input Strings
#include <stdio.h>

int main() {
  // Create a string
  char firstName[30];

  // Ask the user to input some text
  printf("Enter your first name: \n");

  // Get and save the text
  scanf("%s", firstName);

  // Output the text
  printf("Hello %s.", firstName);
  
  return 0;
}
//Note that you must specify the size of the string/array (we used a very high number, 30, but atleast then we are certain it will store enough characters for the first name), and you don't have to specify the reference operator (&) when working with strings in scanf().
