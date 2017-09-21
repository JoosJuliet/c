
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// srand()의 인자로 time()


int main(void){
	int i,n,seed;
	seed = time(NULL);

	/* 컴퓨터의 현재 시간을 가져온다
  	 * 컴퓨터시간은 계속 변경이된다.
  	 * time.h에 선언되어있는 time()
  	 * time(NULL) 은 1970년 1월 1일 이후의 경과된 시간을 초 단위로 반환하는 함수
	 */
	srand(seed);
	
	/* void srand( unsigned int seed );
  	 * srand : rand 함수만으로 생성되는 난수는 일정한데 
  	 * srand를 이용, 시간 값을 매개로 초기화하면 일정하지 않고 불규칙적인 난수가 생성된다.

	*/
	printf("\n%s\n%s",
		"Some randomly distributed integers will be printed.",
		"How many do you wnat to See?");
	scanf("%d",&n);
	for(i=0;i<n;++i){
		if(i%10 == 0)
			putchar('\n');
		printf("%12d",rand());
	}
	printf("\n\n");
	return 0;
}
