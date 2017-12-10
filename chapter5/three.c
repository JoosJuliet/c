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
  왜냐하면 z가 전역변수로 선언이 되있기 때문에 파일 전체에 유효하기에 z의 값이 변화가 될 시 이는 모두 저장된다.
  그러므로 f(z)가 실행될 시 z가 7이 된다.

*/

/*
assert()은 인자로 전달된 수식이 거짓이며 시스템은 메시지를 출력하고 프로그램을 중단시킨다.
프로그램을 정확히 작동하게 만들며 작성의도와 다르게 프로그램이 돌아가는걸 방지하는게
*/z


/*
!(a+1 == b+1)
true
  a==b -> false
false
  a!=b -> true

(a>b || a<=b || a<b)

  !
!((a<1 || b<3) && c<3)
false
(a<1 || b<3) c<3 둘 중 하나만 false      => true
  false       true
  true        false
  false       false


(a<1 || b<3)가 true이려면
t       f
        b>3&&b==3
f       t
(a>1&&a==1)
t       t

(a<1) b>3&& b==3 true


true
(a<1 || b<3), c<3도 true     => false
  true 려면
t       t     t
t       f     t
f       t     t

c<3이면서 a<1 이면서 b<3
c<3이면서 a<1 이면서 (b>3|| b==3)
c<3이면서 (a>1|| a==1) 이면서 b<3

이면 false

결국... (a>=1) ||(b>=3) || (c>=3)
*/

#include <stdio.h>

int main(void)
{

	int a=1,b=2,c=3;
	a+=b+=++c;
	printf("%5d%5d%5d \n",a,b,c);
	{
		float b=4.0;
		int c;
		a+= c =5*b;
		printf("%5d%5.1f%5d\n",a,b,c);
	}
	printf("%5d%5d%5d\n",a,b,c);
	return 1;
}

  2
b - a > 2
a 1,2,3
b 5-1,2,3  4 - 1,2  3 - 1

1/30 = 0.03   1/30*2/3 = 0.02   1/30*1/3 = 0.01
0.06 안일어날 확률 0.94
~ 0.05 안일어날 확률 0.95
100번 던짐 5번 일어나는 것

0.05 + 0.05*0.95 + ...
0.05(1+0.95...) 사실상 1000번은 무한대
1/(1-0.95)
1/(0.05) = 20번


주사위가 두개 있어
a는 1~3까지고 b는 1~30까지야. 동시에 a와 b를 굴릴거야
근데 b가 5가 나오고 a가 1,2,3이면 주사위 돌리는 것을 그만해야하고
b가 4가 나오고 a가 1,2면 주사위 돌리는 것 그만해야하고
b가 3이 나오고 a가 1 나오면 주사위 돌리는 것 그만해야해.
총 주사위는 1000번까지 돌릴 수 있어.
그 때 주사위를 몇번이나 돌릴 수 있는지 평균을 내시오


근데 1000번 시행


/*
기본적인 유효범위 규칙은 변수는 그 변수가 선언된 블록 안에서만 이용이 가능하다.
그렇기 때문에 {}안에 있는 b가 밖에 있는 b에 전혀 영향을 안 주는 것이고 b,c 모두 같은 이름으로 변수 선언이 가능한 것이다.
외부에 있는 a는 외부 블록에 선언되어 있는데 내부에는 선언이 되어 있지 않다. 따라서 내부에서 외부의 값을 사용할 수 있따.
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
