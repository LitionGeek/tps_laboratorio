/*
 ============================================================================
 Name        : Clase5.c
 Author      : Alan Galvan
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int numbers[5];
	int total;
	float prom;
	int bigger;
	int numberr2[10];
	int buffNumber;
	//Ejercicio 5-1
	for(int i  = 0 ; i < 5 ; i++){
		numbers[i] = getInteger();
	}
	total = calculateValueTotal(numbers);
	calculateImpars(numbers);
	//Ejercicio 5-2
	prom = calculateProm(total);
	printf("Promedio total %.2f",prom);
	//Ejercicio 5-3
	bigger = maxBigger(numbers);
	//Ejercicio 5-4
	for(int i = 0 ; i < 10 ; i++){
		buffNumber = fogetInteger();
		if(betweenMaxAndMin(buffNumber)){
			numberr2[i] = buffNumber;
		}
	}
	cantNumbersNegatives(numberr2);
	sumOfImpars(&numberr2);
	maxBiggerImpers(&numberr2);
	listNumbers(&numberr2);
	listNumbersBiggerTo(&numberr2);
	listNumbersInPositionsImpars(&numberr2);
	//Ejercicio 5-5
	getNumbersWithFilter();
	return EXIT_SUCCESS;
}

int betweenMaxAndMin(int buffNumber,int max, int min){
	int retorno = 0;
	if(buffNumber <= max && buffNumber >= min){
		retorno = 1;
	}
	return retorno;
}

int getInteger(){
	int number;
	printf("Ingrese el numero");
	scanf("%d",&number);
	return number;
}

int calculateImpars(int *numbers){
	for(int i = 0 ; i < 5 ; i++){
		if(numbers[i] % 2 != 0){
			printf("\n%d es numero impar %d",numbers[i]);
		}
	}
}

int calculateValueTotal(int *numbers){
	int buffTotal;
	for(int i = 0 ; i < 5 ; i++){
		buffTotal += numbers[i];
	}
	printf("\nTotal : %d",buffTotal);
	return buffTotal;
}


float calculateProm(int *total){
	float buffProm;
	buffProm = total / 5 ;

	return buffProm;
}

int maxBigger(int *numbers){
	int bigger;
	for(int i = 0 ; i < 5 ; i++){
		if(numbers[i] > bigger){
			bigger = numbers[i];
		}
	}
	return bigger;
}

int cantNumbersNegatives(int *numbers){
	int cantNegatives = 0 ;
	for(int i = 0 ; i < 10 ; i++){
		if(numbers[i]<0){
			++cantNegatives;
		}
	}
	return cantNegatives;
}

int sumOfImpars(int *numbers){
	int buffSumInpares=0;
	for(int i = 0 ; i < 10 ; i++){
		if(numbers[i] %2 != 0){
			buffSumInpares = buffSumInpares+ numbers[i];
		}
	}
	return buffSumInpares;
}

int maxBiggerImpers(int *numbers){
	int bigger;
	for(int i = 0 ; i < 5 ; i++){
		if(numbers[i] % 2 !=0){
			if(numbers[i] > bigger){
				bigger = numbers[i];
			}
		}
	}
	return bigger;
}

void listNumbers(int *numbers){
	for(int i = 0 ; i < 10 ; i++){
		printf("\nNumber : %d",numbers[i]);
	}
}

void listNumbersBiggerTo(int *numbers){
	int buffCantNumbers=0;
	for(int i = 0 ; i < 10 ; i++){
		if(numbers[i] > 15){
			buffCantNumbers = ++buffCantNumbers;
		}
	}
	printf("\nNumeros mayores a 15: %",buffCantNumbers);
}

void listNumbersInPositionsImpars(int *numbers){
	int buffCantNumbers=0;
	int buffNumbers[10];
	for(int i = 0 ; i < 10 ; i++){
		if(i % 2 != 0){
			buffNumbers = numbers[i];
		}
	}
	printf("\nNumeros mayores a 15: %",buffCantNumbers);
}

void getNumbersWithFilter(){
	int numbers[10] = {0};
	int buff;
	int promPositives = 0;
	int negativoMayor = 0;
	int sumPositives = 0;
	for(int i = 0 ; i < 10 ; i++){
		if(numbers[i] == 0){
			printf("Ingrese un numero: ");
			scanf("%d",&buff);
			if(buff < 75 && buff > -50){
				numbers[i] = buff;
				break;
			}
		}
	}
	for(int i = 0 ; i < 10 ; i++){
		if(numbers[i] > 0 ){
			sumPositives= numbers[i];
		}
		if(negativoMayor > numbers[i]){
			negativoMayor = numbers[i];
		}
	}
	promPositives = sumPositives /10;

}
