/*

 	Example:  Make a program that reads an A matrix of integers (2x4). Next, read a matrix B of 
 	integers (4x3). Print, in a line, separated by a single space, the elements common to A and 
 	B. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int a[2][4], b[4][3], i, j, k, l;
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	printf("-------");

	for(k = 0; k < 4; k++){
		for(l = 0; l < 3; l++){
			scanf("%d", &b[k][l]);
		}
	}

	for(i = 0; i < 2; i++){
		for(j = 0; j < 4; j++){
			for(k = 0; k < 4; k++){
				for(l = 0; l < 3; l++){
					if(a[i][j] == b[k][l]){
						printf("%d ", a[i][j]);
					}
				}
			}
			
		}
	}

	return 0;
}
