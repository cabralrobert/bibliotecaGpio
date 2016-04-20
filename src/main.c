#include <stdio.h>
#include <unistd.h>
#include "gpioInit.h"
#include "gpioValue.h"
#include "gpioDirection.h"

int main(){
	initGpio(60);
	gpioDirection(60, 1);
	gpioValue(60, 1);
}

void menu(){

	printf("----------MENU----------\n");
	printf("----1 - Setar o pino----\n");
	printf("----2 - Setar direção---\n");
	printf("----3 - Setar o valor---\n");

}
