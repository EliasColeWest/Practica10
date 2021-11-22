#include<stdio.h>
#include<stdlib.h>

int main(){
	//Declarando variables
	int filas = 7;
	int columnas = 5;
	int datos[filas][columnas], elementos;
	//Numero de filas y columnas
	printf("Numero de filas:\t %d\n", filas);
	printf("Numero de columnas:\t %d\n", columnas);
	//Cuantos elementos contiene el arreglo
	elementos=filas*columnas;
	printf("Elementos:\t %d\n", elementos);
	//Elemento renglon 1 columna 4
	datos[1][4]=0;
	printf("Valor renglon 1 columna 4:\t %d\n", datos[1][4]);
	
	

}
