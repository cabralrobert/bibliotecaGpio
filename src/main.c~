#include <stdio.h>
#include <unistd.h>
#include "gpioInit.h"
#include "gpioValue.h"
#include "gpioDirection.h"

int main(){
	int quant, tempo;
	printf("Digite a quantidade de pinos:\n");
	scanf("%d", &quant);
	int pinos[quant];

	int i = quant;

	printf("Digite o tempo: ");
	scanf("%d", &tempo);

	while(quant > 0)
	{
		int porta;
		printf("Digite a porta: ");
		scanf("%d", &pinos[i]);
	

		initGpio(pinos[i]);
		gpioDirection(pinos[i], 1);	

		quant--;
	}

	int j = quant;

//	while(1){
		while(j > 0){
			gpioValue(pinos[j], 1);
			printf("Pino: %d\n", pinos[j]);
			usleep(tempo);
			gpioValue(pinos[j], 0);
			j--;
		}
//		sleep(1);
//	}
}

void menu(){

	printf("----------MENU----------\n");
	printf("----1 - Setar o pino----\n");
	printf("----2 - Setar direção---\n");
	printf("----3 - Setar o valor---\n");

}
