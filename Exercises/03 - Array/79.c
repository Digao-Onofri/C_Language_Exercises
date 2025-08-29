/*

 	Example:  Make a program that reads a 3x5 matrix of integers. Next, show the prime numbers
 	present in the matrix.
 	Youtube lesson: https://youtu.be/Z14M0Weu9FA
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main()
{
	int a[3][5], i, j, k, control, prime;

	printf("Enter the values for the matrix A:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("The prime numbers in the matrix are:\n");
	//search the prime numbers
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++) {
			control = 0;
			prime = a[i][j];
			for(k = 2; k < prime; k++){
				if(prime % k == 0){
					control = 1;
					break;
				}
			}
			if(control == 0 && prime != 0){
				printf("%d ", prime);	
			}
		}	
	}

	return 0;
}
