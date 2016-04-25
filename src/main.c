#include <stdio.h>
#include <unistd.h>
#include "gpioInit.h"
#include "gpioValue.h"
#include "gpioDirection.h"

void initVetorPinos(int* pinos, int* quant);
void initPinos(int* pinos, int* quant);
void blinkLed(int* pinos, int* quant);

int main(){
	int quant;
	printf("Digite a quantidade de pinos a ser usado: ");
	scanf("%d", &quant);

	int pinos[quant];

	initVetorPinos(pinos, &quant);

	initPinos(pinos, &quant);

	//acender de um em um na ordem que foi inserido no vetor

	blinkLed(pinos, &quant);

	
}

void blinkLed(int* pinos, int* quant){
	int i = 0;
	for(i = 0; i < *quant; i++){
		gpioValue(pinos[i], 1);
		sleep(1);
		gpioValue(pinos[i], 0);
		sleep(1);
	}
	i = 0;
	blinkLed(pinos, quant);
}

void initVetorPinos(int* pinos, int* quant){
	int i = 0;
	for(i = 0; i < *quant; i++){
		printf("Digite o pino: ");
		scanf("%d", &pinos[i]);
	}

}

void initPinos(int* pinos, int* quant){
	int i = 0;
	for(i = 0; i < *quant; i++){
		initGpio(pinos[i]);
		gpioDirection(pinos[i], 1);
		printf("Pino: %d iniciado", pinos[i]);
	}
}
