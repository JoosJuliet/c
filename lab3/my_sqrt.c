


#include <stdio.h>
#include <math.h>
double my_sqrt(double number)
{
  double sqrt;
  /*이 부분을 작성하시오*/

  sqrt = 1;

  int n = 100; //무한대 대신에 충분히 큰 수를 넣었습니다.
  while( n-- )
    sqrt = 0.5 * (sqrt + number/sqrt);
  return sqrt;
}

int main(int argc, char *argv[])
{
  double x;
  printf("Insert non-negative number x : ");
  scanf("%lf",&x);
  printf("\nsqrt(x) = %10lf, sqrt(x)^2 = %.30e\n", my_sqrt(x), my_sqrt(x)*my_sqrt(x));
  return 0;
}
