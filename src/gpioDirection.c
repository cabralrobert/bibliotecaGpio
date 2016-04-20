#include <stdio.h>
#include <string.h>
#include "gpioDirection.h"

void gpioDirection(int pin, int flag){
	FILE* f = NULL;
	char path[100];

	sprintf(path, "/sys/class/gpio/gpio%d/direction", pin);
	f = fopen(path, "w");
	
	if(flag == 1){
		fprintf(f, "out");
		fclose(f);	
	}
	else if(flag == 0){
		fprintf(f, "in");
		fclose(f);	
	}
	
}