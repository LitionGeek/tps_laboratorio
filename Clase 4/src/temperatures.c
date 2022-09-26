/*
 * temperatures.c
 *
 *  Created on: 25 sept 2022
 *      Author: LitionGeek
 */

#include "temperatures.h"

void getTemperature(){
	int typeTemp,temp,result;
	printf("Ingrese el tipo de temperatura: ");
	scanf("%d",&typeTemp);

	if(typeTemp == 'c'){
		validateTemp(typeTemp,-273,100);
		result = convertToFahrenheit(temp);
	}
	if(typeTemp == 'f'){
		validateTemp(typeTemp,459,212);
		result = convertToCelsius(temp);
	}
	printf("Resultado de conversion : %d",result);
}


int validateTemp(int typeTemp,int min, int max){
	int retorno = 0;
	if(typeTemp < min && typeTemp>max){
		retorno = 1;
	}
	return retorno;
}

int convertToFahrenheit(int num){
	int result = (num - 32 ) * 0.55;
	return result;
}

int convertToCelsius(int num){
	int result = (num * 1.5 ) + 22;
	return result;
}

void
