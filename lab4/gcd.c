
#include <stdio.h>

int gcd(int big, int small);

int main(void)
{
  printf("gcd(10,15) = %d\n", gcd(10,15));
  printf("gcd(125,13) = %d\n", gcd(125,13));
  printf("gcd(625,225) = %d\n", gcd(625,225));
  printf("gcd(6840,324) = %d\n", gcd(6840,324));
}

int gcd(int big, int small)
{
  int tmp;

/*  if(big<small)
  {
<<<<<<< HEAD
    tmp = big; 
	big= small;
  	small = tmp;
=======
    tmp=big;
    big=small;
  	small=tmp;
>>>>>>> d0edf6d118337c0aecc0447567418abd8f2ae493
  }
*/
  // 더 큰수 big, 더 작은수 b
  tmp = big%small; //깔끔히 나눠진다. 그렇다면 small가 최대공약수
  while(tmp!=0) //나머지 있다 1
  {
    big=small;
<<<<<<< HEAD
small=tmp; //공통의
=======
    small=tmp; //공통의
>>>>>>> d0edf6d118337c0aecc0447567418abd8f2ae493
    tmp=big%small;
  }
  return small;
}
