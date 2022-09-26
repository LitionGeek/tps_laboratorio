/*
 ============================================================================
 Name        : Ejercicios.c
 Author      : Alan Galvan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void getInteger(int number);
float getAndReturnFloat();
int checkIfParNumber(int number);
int Restar1(int, int);
int Restar2(void*);
void Restar3(int, int);
void Restar4(void*);
int checkIfParNumberAndReturn(int min,int max);
void realizarDescuento(int discount,int num1);
void operationWithNumbers(char opt,int numero1,int numero2);
void getInteger2();

int main(void) {
	setbuf(stdout, NULL);
	int num = 5;
	float numberReturned;
	int isParNumber;
	//Ejercicio 3.1:
	getInteger(num);
	//Ejercicio 3.2:
	numberReturned = getAndReturnFloat();
	printf("\nNumero retornado: %.2f",numberReturned);
	//Ejercicio 3.3:
	isParNumber = checkIfParNumber(num);
	printf("1 si es impar y 0 si es par : %d",isParNumber);
	//Ejercicio 3.4:
	isParNumber = checkIfParNumberAndReturn(10,20);
	printf("1 si esta dentro del parametro y 0 si excede: %d",isParNumber);
	return EXIT_SUCCESS;
}


void getInteger(int number){
	printf("Numero %d",number);
}

float getAndReturnFloat(){
	float number;
	printf("\nIngrese un valor: ");
	scanf("%f",&number);
	return number;
}

int checkIfParNumber(int number){
	int retorno = 0;
	if(number % 2 == 0){
		retorno = 1;
	}
	return retorno;
}

int checkIfParNumberAndReturn(int min,int max){
	int retorno = 0;
	float number;
	printf("\nIngrese un valor: ");
	scanf("%f",&number);
	if(min<=number && max>=number){
		retorno = 1;
	}
	return retorno;
}

int Restar1(int num1, int num2){
	return num1 - num2;
}

int Restar2(void* num1){
	int num2 = 2;
	return num1 - num2;
}

void Restar3(int num1, int num2){
	int result = num1 - num2;
	printf("Resultado: %d",result);
}

void Restar4(void* num1){
	int num2 = 2;
	int result;
	result = num1 - num2;
	printf("Resultado: %d",result);
}

void getValueAndDescount(){
	int num1;
	printf("\nIngrese un valor: ");
	scanf("%d",&num1);
	if(num1 >= 10 && num1 < 100){
		realizarDescuento(5,num1);
	}
}

void realizarDescuento(int discount,int num1){
	int result = (num1*discount) + num1;
	printf("Resultado %d",result);
}

void getInteger2(){
	int numero1,numero2;
	char operation[1];
	printf("\nIngrese un valor: ");
	scanf("%d",&numero1);
    printf("\nIngrese un valor: ");
	scanf("%d",&numero2);
	if((numero1 >= 10 && numero1 < 100) && (numero2 >= 10 && numero2 < 100)){
		printf("Ingrese la operacion: ");
		scanf("%s",operation);
		if(operation == 's'){
			operationWithNumbers(operation,numero1,numero2);
		}
		if(operation == 'r'){
			operationWithNumbers(operation,numero1,numero2);
		}
	}
}

void operationWithNumbers(char opt,int numero1,int numero2){
	int resultado;
	if(opt == 's'){
		resultado = numero1 + numero2;
	}
	if(opt == 'r'){
		resultado = numero1 - numero2;
	}
	printf("Resultado : %d",resultado);
}
