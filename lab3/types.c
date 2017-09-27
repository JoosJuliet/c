


#include <stdio.h>
int main(int argc, char *argv[])
{
	printf("the size of some fundamental types. \n\n");
	printf("char: %31u byte \n",(unsigned int)  sizeof(char));
	printf("short: %31u bytes \n",(unsigned int) sizeof(short));
	printf("int: %31lu bytes \n",sizeof(int));
	printf("long: %31lu bytes \n",sizeof(long));
	printf("unsigned: %31lu bytes \n",sizeof(unsigned));
	printf("float: %31lu bytes \n",sizeof(float));
	printf("double: %31u bytes \n",sizeof(double));
	printf("long double: %31u bytes\n", sizeof(long double));
	return 0;
}
