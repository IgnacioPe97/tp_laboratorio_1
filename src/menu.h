/*
 * bibliotecaTp1.h
 *
 *  Created on: 06-04-2022
 *      Author: Ignacio Pereyra
 */

#ifndef MENU_H_
#define MENU_H_
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int menuPrincipal();
int ingresarKm(int *kilometros,int*flagKm);
int ingresarPrecioVuelos(int *flagPrecios,int flagKm,int *precioAerolineas, int *precioLatam);
int calcularCostos(int flagKm,int flagPrecios,int*flagCalcular);
void salida(char * x);



#endif /* MENU_H_ */
