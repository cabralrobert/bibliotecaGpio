#include <stdio.h>
#include "gpioValue.h"

void gpioValue(int pin, int flag){
	FILE* f = NULL;
	char path[100];
	
	sprintf(path, "/sys/class/gpio/gpio%d/value", pin);
	f = fopen(path, "w");
	
	if(flag == 1){
		fprintf(f, "1");
		fclose(f);
	}
	else if(flag == 0){
		fprintf(f, "0");
		fclose(f);
	}
	
}
