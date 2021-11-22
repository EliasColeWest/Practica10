#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variables
	int datos[10][10],contador;
	//Asignando numeros aleatorios a la diagonal e imprimiendolos
	while(contador<=100){
		datos[contador][contador]=rand() %10;
		printf("Datos:\t%d\n", datos[contador][contador]);
		contador++;
	}

}
