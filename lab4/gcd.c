
#include <stdio.h>

int gcd(int, int);

int main(void)
{
  printf("gcd(10,15) = %d\n", gcd(10,15));
  printf("gcd(125,13) = %d\n", gcd(125,13));
  printf("gcd(625,225) = %d\n", gcd(625,225));
  printf("gcd(6840,324) = %d\n", gcd(6840,324));
}

int gcd(int a, int b)
{
  int rem;
  if(a<b)
  {
  	int tmp;
    tmp = a;
    a=b;
  	a = tmp;
  }
  // 더 큰수 a, 더 작은수 b
  rem = a%b; //깔끔히 나눠진다. 그렇다면 b가 최대공약수
  while(rem!=0) //나머지 있다 1
  {
    a=b;
    b=rem; //공통의
    rem =a%b;
  }
  return b;
}
