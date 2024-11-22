/*

 	Example:  Declare a structure to represent complex numbers, made up of the real part and the 
 	imaginary part. Next, read two complex numbers (real part followed by imaginary part of each 
 	one). Present as an answer the addition, subtraction and product of complex numbers, being 
 	one value per line. 
 	Youtube lesson: https://youtu.be/hH91lTKLseI
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>

typedef struct complex_numbers{
	float real;
	float imagine;
} complex_numbers;

int main(){
	complex_numbers v[2];
	int j;
	float sum_real, sum_imagine;
	float dif_real, dif_imagine;
	float mult_real, mult_imagine;
	
	
	for(j = 0; j < 2; j++){
		scanf(" %f", &v[j].real);
		scanf(" %f", &v[j].imagine);
	}
	
	sum_real = sum_imagine = 0;
	dif_real = dif_imagine = 0;
	mult_real = mult_imagine = 0;
	//calculating and printing de sum
	sum_real = (v[0].real + (v[1].real));
	sum_imagine = (v[0].imagine + (v[1].imagine));
    	printf("Sum: %f + (%f)i\n", sum_real, sum_imagine);

	//calculating and printing the difference
	dif_real = (v[0].real - (v[1].real)); 
	dif_imagine = (v[0].imagine - (v[1].imagine));
	printf("Difference: %f + (%f)i\n", dif_real, dif_imagine);
	
	//calculating and printing the multiplication
	mult_real = ( v[0].real * (v[1].real) ) - ( v[0].imagine * (v[1].imagine) ); 
	mult_imagine = ( v[0].real * (v[1].imagine) ) +   ( v[1].real * (v[0].imagine) ) ;
	printf("Multiplication: %f + (%f)i\n", mult_real, mult_imagine);
	
	return 0;
}
