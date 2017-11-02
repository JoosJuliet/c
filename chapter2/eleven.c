
#include <stdio.h>

int main(void)
{
  int i=0,power=1;

	printf("%d\n",i++);
	printf("-------%d\n",i);
	printf("%d\n",++i);
 printf("-------%d\n",i);

  while(i++ <=10)
	printf("%-6d\n",power *=2);
  printf("\n");
  return 0;

}
