#include <stdio.h>
#include "gpioInit.h"

//	FUNÇÃO INICIAR O GPIO
void initGpio(int pin){
	FILE* f = NULL;
	char path[3];

	f = fopen("/sys/class/gpio/export", "w");
	sprintf(path, "%d", pin);
	fprintf(f, "%d", pin);
	fclose(f);
}
