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



/*
int &year,&month,&date;

int input_day();
int hour_calculate();

int main(void)
{
  int tm;
  y,m,d = input_day();
  printf("%d,%d,%d\n", y,m,d);

  int day = hour_calculate(y,m,d);
  // 시간변화
}

int input_day()
{
  int hr;
  scanf("%d,%d,%d", &year,&month,&date);
  return year,month,date;
}

int hour_calculate(y,m,d)
{
  // if year % 4 == 0 and (year % 100 != 0 or year % 400 == 0):
  //          day += 1
  int normal = 365*(y-1000)+... ;//이건 뭐 구할 수 있찌
  if(y%4==0)
  {
    normal -= 1
    if(y%100==0)
    {
      normal += 1 //이러면 윤년에 해당 안되는게 된다.
      if(y%400==0)
      {
        normal -= 1
      }
    }


  }

  return normal;
}
*/
