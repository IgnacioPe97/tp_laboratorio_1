/*
 * calculo.c
 *
 *  Created on: 12-04-2022
 *      Author: Ignacio Pereyra
 */
#include "calculo.h"

float pagoDebito (int num1)
{

	int descuento = 10;
	float descuentoDebito = (num1)*(descuento/100.0);
	float resultado= num1-descuentoDebito;
	 return resultado;
}
float pagoCredito (int num1)
 {
	float resultado;
	int aumento = 25;
	float aumentoCredito = (num1)*(aumento/100.0);
	resultado= num1 + aumentoCredito;
	return resultado;
}
float pagoBitcoin(int num1)
 {
	 float valorBitcoin;
	 valorBitcoin = 4520937.39;
	 float resultado = num1/valorBitcoin;

	 return resultado;
 }
float precioUnitario(int x,int num1)
 {
	float resultado;
	if(num1>0)
	{

	 resultado=(float)num1/x;
	}
	else
	{
		resultado=0;
	}

	 return resultado;
 }
