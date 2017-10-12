
#include <stdio.h>

int gcd(int a, int b)
{
  a>b ? a=a : a=b;
  int rem;
  rem = a%b;
  while(rem!=0)
  {
    a=b;
    b=rem;
    rem =a%b;
  }
  return b;
}

int main(void)
{
  printf("gcd(10,15) = %d\n", gcd(10,15));
  printf("gcd(125,13) = %d\n", gcd(125,13));
  printf("gcd(625,225) = %d\n", gcd(625,225));
  printf("gcd(6840,324) = %d\n", gcd(6840,324));

}
