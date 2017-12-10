#include <stdio.h>
#include <math.h>

double k;
int main(void) {

  scanf("%f\n", &k);
  k = sqrt(sqrt((double) k));
  printf("%f\n", k);

  return 0;
}

/*
  Use the library function sqrt() to write a function that returns the fourth root of its int argument k.
  The value returned should be a double.
  Use your function to make a table of values



*/
