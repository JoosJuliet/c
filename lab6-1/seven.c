

#include <stdio.h>

void main()
{
	int arr[4] = {1,2,3,4};
	int *p = arr+3;
	printf("%d\n",p[-2]);
}
