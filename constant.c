#include <stdio.h>

int main() {
  const int minutesPerHour = 60;
  const float PI = 3.14;

  printf("%d\n", minutesPerHour);
  printf("%f\n", PI);
  return 0;
}


//You should always declare the variable as constant when you have values that are unlikely to change.
//When you declare a constant variable, it must be assigned with a value like this const int minutesPerHour = 60;
//Another thing about constant variables, is that it is considered good practice to declare them with uppercase. It is not required, but useful for code readability and common for C programmers.Like this const int BIRTHYEAR = 1980;