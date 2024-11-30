/*

 	Example:  Write a program that declares a double array of size N (user-reported) and a 
 	pointer to an integer. Using only pointer arithmetic, read the array and show the average 
 	of the Elements. Next, store the index of the element that has the closest value to the mean 
 	in the pointer and display it. 
 	Youtube lesson: https://youtu.be/1aCE0wNqsCU
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<math.h>
int main() {
	int N, i;
	
	printf("Enter the lenght of the array:\n");
	scanf("%d", &N);
	
	double array[N], *p, *closest, mean, avg, sum;
	
	printf("Enter the values of the array:\n");
	for(i = 0; i < N; i++){
		scanf("%lf", &array[i]);
		p = &array[i];
		sum = sum + *p;
	}
	
	avg = sum / N;
	printf("Array average: %lf\n", avg);
	
	closest = array;
	for(i = 0; i < N; i++){
		p = &array[i];
		mean = (*closest - avg);
		if(mean > fabs(*p - avg)){
			closest = p;
		}
	}
	
	printf("%lf", *closest);
	printf("\n");
	
	return 0;
}
