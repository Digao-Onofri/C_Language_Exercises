/*

 	Example:  Make a program using pointers to order 5 numbers stored in an array and show them 
 	ordered on the screen. 
 	Youtube lesson: https://youtu.be/m4y3Vn3X-3s
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main(){
	int array[5];
	int i, j, *p, *k, aux;

	printf("Enter 5 integers:\n");
	for(i = 0; i < 5; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < 5; i++){
		p = &array[i];
		for(j = i + 1; j < 5; j++){
			k = &array[j];
			if(*p > *k){
				aux = *k; 
				*k = *p;
				*p = aux;
			}
		}
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", array[i]);
	}
	
	printf("\n");

	return 0;
}
