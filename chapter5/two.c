#include <stdio.h>
#include <math.h>

#define LIMIT 30

double k;
int main(void) {

  int n;
double afterk;



  printf("%7s%19s\n","원래수"," 4승수");
 
  for(n=0;n<=30;n++){
 
	 afterk = sqrt(sqrt((double) n));

   printf("%d    %lf\n", n,afterk);
  }
  return 0;
}

/*
  Use the library function sqrt() to write a function that returns the fourth root of its int argument k.
  The value returned should be a double.
  Use your function to make a table of values



*/
