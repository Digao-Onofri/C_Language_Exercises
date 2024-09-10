/*

 	Example:  Write a program that declares a double vector of size N (user-reported) and a 
 	pointer to an integer. Using only pointer arithmetic, read the vector and show the average 
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
	
	double v[N], *l, med, soma;
	
	for(i = 0; i < N; i++){
		scanf("%lf", &v[i]);
		l = &v[i];
		soma = soma + *l;
	}
	
	med = soma / N;
	printf("Average: %lf\n", med);
	
	for(i = 0; i < N; i++){
		for(j = i + 1; j < N; j++){
			if(fabs (v[i] - med) > fabs (v[j] - med))
			{	
				l = &v[j];
			}
		}
		
	}
	
	printf("%lf", *l);
	
	return 0;
}
