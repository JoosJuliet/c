#include <stdio.h>

#define N 100

int main(int argc, char const *argv[])
{
  int a[N], i, *p, sum=0;
  p = a; /* is equivalent to */ p =&a[0];
  p = a+1; /* is equivalent to */ p = &a[1];

  for ( p=a; p < &a[N]; ++p)
    sum += *p;

  for(i=0; i<N; ++i)
    sum += *(a+i);

  p=a;
  for(i=0; i<N; ++i)
    sum +=p[i];
  // Is it possible?
  a = p; ++a; a+=2;
  return 0;
}
