/*
 ============================================================================
 Name        : CLass4.c
 Author      : Alan Galvan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "temperatures.h"

int pedirNumero();
int pedirNumeroAndResult(int num1,int num2,int *result);

int main(void) {
	int num,i,factorial = 1,resultado,isValid;
	num = pedirNumero();
	printf("%d! ",num);
	for(i = 0 ; i <= num ; i++){
		factorial = factorial*i;
		printf(" %d ", i);
	}
	printf(" = %d",factorial);

	//Ejercicio 4-2
	isValid = pedirNumeroAndResult(2,3,resultado);
	printf("Valor es valido: %d",isValid);
	//Ejercicio 4-3
	getTemperature();
	//Ejercicio 4-4
	showMenu();
}

int pedirNumero(){
	int numero1;
	printf("\nIngrese un valor: ");
	scanf("%d",&numero1);
	return numero1;
}


int pedirNumeroAndResult(int num1,int num2,int *result){
	int retorno = 0;
	*result = num1+num2;
	if(result){
		retorno = 1;
	}
	return retorno;
}
