/*
 * bibliotecaTp1.c
 *float
 *  Created on: 06-04-2022
 *      Author: Ignacio Pereyra
 */
#include "menu.h"

int menuPrincipal(){
			int cant;
			int opcion;
			//system("cls");
			printf("1-Ingresar Kilometros \n");
			printf("2-Ingresar precio de vuelo \n");
			printf("3-Calcular todos los costos \n");
			printf("4-Informar Calculos \n");
			printf("5-Carga forzada de datos \n");
			printf("6-Salir \n");


			printf("ingrese opcion: ");
			fflush(stdin);
			cant =	scanf("%d", &opcion);



			if(cant==0){
				opcion=5;
	}
			return opcion;
}

int ingresarKm(int *kilometros,int*flagKm ){
	int cant;
	int todoOk=0;
	do{
			printf("Ingrese kilometros a viajar\n");
			cant = scanf("%d", kilometros);
			if(cant == 1)
			{
				if(kilometros>0)
				{
					printf("Kilometros ingresados: %d\n",*kilometros);
					todoOk=1;
					*flagKm=1;

				}
				else
				{
					printf("error en el ingreso, numero negativo\n");
					cant=0;

				}
			}
			else
			{
				printf("Error en el ingreso\n");
			}
			system("pause");

	}while(cant==0);
	return todoOk;
}
int ingresarPrecioVuelos(int *flagPrecios,int flagKm,int *precioAerolineas, int *precioLatam){
	int todoOk=0;
	int opcion;
	int cant;
	if(flagKm==1)
	{
		do
		{
					printf("1-Aerolineas\n2-Latam");
					fflush(stdin);
					cant=scanf("%d",&opcion);
					if(cant==0)
					{
						printf("Error en el ingreso, ingrese nuevamente\n");
								//	cant=scanf("%d",&opcion);
					}

					if(cant==1)
					{
									if(opcion==1)
									{
											printf("ingrese precio de Aerolineas\n");
											scanf("%d",precioAerolineas);
												if(precioAerolineas>0)
												{
													printf(" precio de Aerolineas: %d\n",*precioAerolineas);
															*flagPrecios=1;

												}
												else
												{
													printf("no ingresaste datos de aerolineas,ingrese nuevamente\n");
													scanf("%d",precioAerolineas);

												}
									}
									else if(opcion==2)
									{
											printf("ingrese precio de Latam\n");
											scanf("%d",precioLatam);
														if(precioLatam>0)
														{
															printf(" precio de Latam: %d\n",*precioLatam);
															*flagPrecios=1;

														}
														else{
															printf("no ingresaste datos de latam,ingresa nuevamente\n");
															scanf("%d",precioLatam);

														}
									}
									else
									{
											printf("Opcion incorrecta, ingrese nuevamente\n");
											cant=0;
									}
					}
					system("pause");
		}while(cant==0);
	}
	else
	{
		printf("Falta ingresar Km, no puedes ingresar precio\n");
	}
	return todoOk;
}
int calcularCostos(int flagKm,int flagPrecios,int *flagCalcular)
{
	if(flagPrecios==1 && flagKm==1)
	{
		*flagCalcular=1;


	}
	else
	{
		printf("Te faltan ingresar Datos\n");
		*flagCalcular=0;

	}
 return flagCalcular;
}

void salida(char * x)
{
			printf("Confirma salida?: ");
			fflush(stdin);
			scanf("%c", x);
}




