/*

 	Example:  Make a program that reads a 3x5 matrix of integers. Next, show the prime numbers
 	present in the matrix.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
//start of the program
int main()
{
	int a[3][5], i, j, k, flag, prime;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 5; j++){
			printf("Enter the value placed in the position [%d][%d]\n", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("-------\n");

	//search the prime numbers
	
	for(i = 0; i < 3; i++){
		flag = 1;
		for(j = 0; j < 5; j++){
			prime = 0;
			prime = a[i][j];
			for(k = 2; k < prime; k++){ //will check if it is a prime number
				if(prime % k == 0){
					flag = 0;
					break;
				}
			}
			if(flag == 1 && prime != 1){
				printf("%d ", prime);
			}
		}			
	}		
	

	return 0;
}
