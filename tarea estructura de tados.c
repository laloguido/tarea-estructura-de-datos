/*B.- Dado el siguiente programa, escriba una funci´on recusrsiva (sin usar
iteraciones) que calcule la suma de los elementos de un arreglo.
*/

#include<stdio.h>
int suma(int *elementos){
	int len = sizeof(*elementos);
	if(len == 1){
		return elementos[1];
	}else{
		int valor = elementos[len];
		return suma(elementos[len -1]) + valor; 
	}
}

int main (int argc , char *argv [ ] ) {
int elementos[10] = {1,2,3,4,5,6,7,8,9,10};
int resultado=sumar(elementos) ;
return 0 ;
}













