/*

 	Example: Make a program that reads a matrix A of integers (3x3). Next, read a matrix B for integers (4x5).
  	Print, in a line, separated by single space, the elements of A that are not present in B. 
 	Youtube lesson: https://youtu.be/MUJhmpPiswM
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main()
{
	int a[3][3], b[4][5], i, j, k, l, control;

	printf("Enter the values of the matrix a:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("Enter the values of the matrix b:\n");
	for(k = 0; k < 4; k++){
		for(l = 0; l < 5; l++){
			scanf("%d", &b[k][l]);
		}
	}

	printf("The values that appears only in matrix A:\n");
	for(i = 0; i < 3; i++){
		control = 0;
		for(j = 0; j < 3; j++){
			for(k = 0; k < 4; k++){
				for(l = 0; l < 5; l++){
					if(a[i][j] == b[k][l]){
						control = 1;
					}	
				}
				if(control == 0){
					printf("%d ", a[i][j]);
					break;
				}
			}
		}
	}

	return 0;
}
