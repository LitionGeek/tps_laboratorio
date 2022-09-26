/*
 * menus.c
 *
 *  Created on: 26 sept 2022
 *      Author: LitionGeek
 */
#include "menus.h"

void showMenu(){
	int option;
	int logueado;
	int comprar;
	int comprado;
	printf("1. Loguearse");
	printf("2. Comprar");
	printf("3. Ver mis compras");
	printf("4. Vender");
	printf("5. Salir");
	scanf("%d",&option);
	switch(option){
	case 1:
		logueado = 1;
		break;
	case 2:
		optionForBought();
		if(logueado != 1){
			comprar = 1;
		}
		break;
	case 3:
		if(logueado != 1 && comprar != 1){
			comprado = menuSeller();
		}
		break;
	case 4:
		if(logueado != 1){
			printf("Debe estar logueado.");
			break;
		}
		if(comprar == 1 && comprado == 1 ){
			prinbtf("No puede vender.");
		}
		menuSeller();
		break;
	case 5:
		break;

	}
}

int menuSeller(){
	int compra = 0;
	printf("1. Vender.");
	printf("2. Hacer factura.");
	printf("3. Volver atras.");

	scanf("%d",compra);
	return compra;
}


void optionForBought(){
	printf("1.Heladera");
	printf("2.Tv");
	printf("3.Celular");
}
