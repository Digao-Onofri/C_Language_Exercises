/*

 	Example:  Write a program that declares a double array of size N (user-reported) and a 
 	pointer to an integer. Using only pointer arithmetic, read the array and show the average 
 	of the Elements. Next, store the index of the element that has the closest value to the mean 
 	in the pointer and display it. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<math.h>
int main() {
	int N, i, j, *p, aux;
	
	scanf("%d", &N);
	
	double array[N], *l, avg, sum;
	
	for(i = 0; i < N; i++){
		scanf("%lf", &array[i]);
		l = &array[i];
		sum = sum + *l;
	}
	
	avg = sum / N;
	printf("Aarrayerage: %lf\n", avg);
	
	for(i = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			if(fabs (array[i] - avg) > fabs (array[j] - avg))
			{	
				l = &array[j];
			}
		}
		
	}
	
	printf("%lf", *l);
	
	return 0;
}
