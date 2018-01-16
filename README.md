# SelenasProblem
//Tarea 2 de curso de Estructura de Datos y Algoritmos. Prof.: Luis Alberto Sanchez Gatica

El usuario ingresará dos listas de diez números enteros como máximo (cada uno).
Antes de indicar, uno por uno, cuáles son esos números, introducirá la cantidad de elementos de la respectiva lista. 
Así, lo primero que introducirá será la cantidad (n1) de elementos del conjunto 1 (arr1), seguida de estos; 
luego, la cantidad (n2) de elementos del conjunto2 (arr1), seguida de estos. 

La salida del programá será la impresión de la listas (tal como la ingresó el usuario) 
siguiendo el criterio de Qué lista tuvo una sumatoria mayor.

Para resolver la problematica, se implementarán 5 funciones:

    intsumArray(int* arr, intn); //Recibe un arreglo y su tamaño. Devuelve el resultado de sumar todos sus elementos
    
    voidprintArray(int* arr, intn); //Fecibe un arreglo y su tamaño, imprime los valores del arreglo uno por uno, 
    separados por un salto de línea
    
    voidprintArrays(int* arr1, intn1, int* arr2, intn2); //Recibe un primer arreglo y su tamaño, más un segundo arreglo y su tamaño.
    Debe llamar a printArray dos veces para imprimir los arreglos en el orden de los parametros (primero arr1 y luego arr2)
    
    voidreadArray(int* arr, int* pN); //Recibe información referente a un arreglo y a la variable que almacenará su tamaño(apuntador). Se debe leer
    el tamaño de la lista a leery luego cada elemento de la lista. 
    
    voidsortArrays(int** pp1, int* pN1, int** pp2, int* pN2);  //Recibe información referente a dos arreglos y sus tamaños.
    Función debe llamar a la función sumArray para decidir cual de los dos arreglos referidos debe ser primero. 
    
    
    No se muestra ningún menú.
