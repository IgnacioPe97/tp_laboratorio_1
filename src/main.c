/*
 ============================================================================
 Name        : tp1_laboratorio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "menu.h"
#include "calculo.h"

int main(void) {
	setbuf(stdout,NULL);
	int kilometros;
	int precioAerolineas=0;
	int precioLatam=0;
	char salir = 'n';
	int flagKm=0;
	int flagPrecios=0;
	int flagCalcular=0;
	float precioDebitoA;
	float precioDebitoL;
	float precioCreditoA;
	float precioCreditoL;
	float precioBitcoinA;
	float precioBitcoinL;
	float precioUnitarioA;
	float precioUnitarioL;
	float diferenciaPrecio;



	do{
		switch(menuPrincipal()){
			case 1:
				ingresarKm(&kilometros,&flagKm);
				break;
			case 2:
				ingresarPrecioVuelos(&flagPrecios,flagKm,&precioAerolineas,&precioLatam);
				break;
			case 3:
				if(flagPrecios==1)
				{
					calcularCostos(flagKm,flagPrecios,&flagCalcular);

						precioDebitoA = pagoDebito(precioAerolineas);
						precioCreditoA = pagoCredito(precioAerolineas);
						precioBitcoinA = pagoBitcoin(precioAerolineas);
						precioUnitarioA = precioUnitario(kilometros,precioAerolineas);
						precioDebitoL = pagoDebito(precioLatam);
						precioCreditoL = pagoCredito(precioLatam);
						precioBitcoinL = pagoBitcoin(precioLatam);
						precioUnitarioL = precioUnitario(kilometros,precioLatam);

					diferenciaPrecio = precioAerolineas-precioLatam;

				}
				else
				{
					printf("Tiene que ingresar precios antes\n");
				}
				break;
			case 4:
				if(flagCalcular==1)
				{
					printf("Pago por debito aerolineas es %.2f\n" ,precioDebitoA);
					printf("Pago por credito Aerolineas $ %.2f\n",precioCreditoA);
					printf("Pago por Bitcoin Aerolineas $ %.50f BTC\n",precioBitcoinA);
					printf("Precio unitario Aerolineas por Km $ %.2f\n",precioUnitarioA);

					printf("Pago por debito latam es %.2f\n", precioDebitoL);
					printf("Pago por credito Latam $ %.2f\n",precioCreditoL);
					printf("Pago por Bitcoin Latam $ %.50f BTC\n",precioBitcoinL);
					printf("Precio unitario Latam por Km $ %.2f\n",precioUnitarioL);
					printf("Diferencia de precio entre Aerolineas y Latam %.2f\n",diferenciaPrecio);
				}
				else
				{
					printf("Te falta ingresar fdatos\n");
				}
				break;
			case 5:

				diferenciaPrecio=162965-159339;
				printf("Pago por debito aerolineas es %.2f\n" ,pagoDebito(162965));
				printf("Pago por debito latam es %.2f\n", pagoDebito(159339));
				printf("Pago por credito Aerolineas $ %.2f\n",pagoCredito(162965));
				printf("Pago por credito Latam $ %.2f\n",pagoCredito(159339));
				printf("Pago por Bitcoin Aerolineas $ %.5f BTC\n",pagoBitcoin(162965));
				printf("Pago por Bitcoin Latam $ %.5f BTC\n",pagoBitcoin(159339));
				printf("Precio unitario Aerolineas por Km $ %.2f\n",precioUnitario(7090,162965));
				printf("Precio unitario Latam por Km $ %.4f\n",precioUnitario(7090,159339));
				printf("Diferencia de precio entre Aerolineas y Latam %.1f\n",diferenciaPrecio);
				break;
			case 6:
				salida(&salir);
				break;
		}
	} while(salir!= 's');



	return EXIT_SUCCESS;
}
