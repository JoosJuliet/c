



#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  double x;
  while (1) {
    printf("Insert non-negative number x : ");
    if( scanf("%lf",&x) != 1)
      break;
    if( x >= 0.0){
      printf("\n%15s %22.15e\n","sqrt(x)=",sqrt(x));
      printf("\n%15s %22.15e\n","pow(x)=",pow(x,x));
    } else{
      printf("\nNumber must be nonnegative. \n");
      break;
    }
    return 0;
  }

}
