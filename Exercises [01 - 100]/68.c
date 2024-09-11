/*

 	Example:  Make a program that reads 5 integers and stores them in an array A. Read 
 	another 5 integers and store them in a array B. Create an array C = A – B (numbers that 
 	appers only in the array a). Print, in a single line, the elements of the vector C separated 
 	from each other by a single space. 
 	Youtube lesson: https://youtu.be/opHkbKcO4XQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
#define MAX 5
int main()
{
	int a[MAX], b[MAX], c[MAX], i, j, k = 0, control;
	
	for(i = 0; i < MAX; i++){
		printf("Enter the value of the position a[%d]\n", i);
		scanf("%d", &a[i]);
	}
	
	printf("------\n");

	for(j = 0; j < MAX; j++){
		printf("Enter the value of the position b[%d]\n", j);
		scanf("%d", &b[j]);
	}

	//difference A - B
	for(i = 0; i < MAX; i++){
		control = 0;
		for(j = 0; j < MAX; j++){
			if(a[i] == b[j]){
				control = 1;
				break;
			}
		}
		if(control == 0){
			c[k] = a[i];
			k++;
		}
	}
	
	printf("The values in array c are: \n");
	control = k;
	for(k = 0; k < control; k++ ){
		printf("%d ", c[k]);
	}
	
	printf("\n");

	return 0;
}































