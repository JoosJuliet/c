

#include <stdio.h>

int main(void){
	int miles,yards;
	float killometers;

	miles = 26;
	yards = 385;
	killometers = 1.609*(miles + yards / 1760.0);

	printf("\n A marathon is %f killometers. \n", killometers);
	return 0;
}
