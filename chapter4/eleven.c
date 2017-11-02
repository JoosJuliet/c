
#include <stdio.h>
int i,j;
int main(void)
{
	printf("Input two integers:");
	scanf("%d%d",&i,&j);
	while(i*j<0 && ++i!=7 && j++!=9)
	{
		printf("i : %d j :%d",i,j);
		printf("1");
	}


}
