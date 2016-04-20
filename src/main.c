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
