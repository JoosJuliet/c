#include <stdio.h>

int z;
void f (int x)
{
  x=2;
  z+=x;
}
int main(void)
{
  z=5;
  f(z);
  printf("z= %d\n",z);
  return 0;
}

/*
  Q. z는?

  A. 7
  왜냐하면 z가 전역변수로 선언이 되있기 때문에 f(z)가 실행될 시
  z가 7이 된다.

*/
