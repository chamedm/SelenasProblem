/*
 ============================================================================
 Name        : selenaProblem.c
 Author      : 
 Version     :
 Copyright   :
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumArray(int * arr, int n);
void printArray(int * arr, int n);
void printArrays(int * arr1, int n1, int * arr2, int n2);
void readArray(int * arr, int * pN);
void sortArrays(int ** pp1, int * pN1, int ** pp2, int * pN2);

int main(void) {
	int arr1[10]; //primer arreglo
	int arr2[10]; //segundo arreglo
	int * p1, * p2;
	int n1, n2; //tamaños

	p1 = arr1;
	p2 = arr2;

	readArray(arr1, &n1); //leer el primer arreglo
	readArray(arr2, &n2); //leer el segundo arreglo
	sortArrays(&p1, &n1, &p2, &n2); //ordenar los apuntadores a los arreglos
	printArrays(p1, n1, p2, n2); //mostrar los arreglos, ya ordenados

	return 0;
}

int sumArray(int * arr, int n){
	int i, t=0;
	for(i=0; i<n;i++){
		t+=arr[i];
	}
	return t;
}

void printArray(int * arr, int n){
	int i;
	for (i=0; i<n; i++)
	{
		printf("%i\n", arr[i]);
	}
}

void printArrays(int * arr1, int n1, int * arr2, int n2){

	printArray(arr1, n1);
	printArray(arr2, n2);
}

void readArray(int * arr, int * pN){
	int n=0;
	scanf("%i", &n);
	*pN=n;

	int i;
	for(i=0; i<n; i++, arr++){
		scanf("%i", arr);
	}
}

void sortArrays(int ** pp1, int * pN1, int ** pp2, int * pN2){
	int r1= sumArray(*pp1, *pN1);
	int r2= sumArray(*pp2, *pN2);
	int * t, tn;

	if(r2>r1){
		t= *pp1;
		*pp1 = *pp2;
		*pp2 = t;
		tn = *pN1;
		*pN1 = *pN2;
		*pN2 = tn;
	}
}
