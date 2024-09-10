/*

 	Example:  Create a program that allocates and reads one matrix X. Next, allocate a second 
 	matrix Y, such that Y be the transpose of X. Show the two matrices on the screen. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p, *m, lin, col, i, check, qtd;
	
	//ask the amount of lines and colunms
	scanf("%d", &lin);
	scanf("%d", &col);
	
	p = malloc(lin * col * sizeof(int));
	
	for(i = 0; i < lin * col; i++ ) {
		scanf("%d", (p + i));
	}
	
	m = malloc(lin * col * sizeof(int));
	
	check = 0;
	qtd = 1;
	for(i = 0; i < lin * col; i++) {
		if(i % col == 0) {
			*(m + i) = *(p + check);
			check += col;
		}
		else {
			*(m + qtd) = *(p + i);
			qtd += col;
		}	
	}
	
	//printing the matrix transpose
	for(i = 0; i < lin * col; i++) {
		printf("%d", *(m + i));
	}
	

	free(p);
	free(m);
	
	return 0;
}
