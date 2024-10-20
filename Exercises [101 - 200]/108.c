/*

 	Example:  Make a program that reads a structure vector with the data of 8 cars: brand, price 
 	and year. Next, read a P-value and show the information for all cars with a price lower than 
 	P. Repeat this process until a P-value ≤ 0 is read. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#define N 8
typedef struct cars{
	char brand[50];
	float price
	int year;
} cars;

int main(){
	cars v[N];
	int i;
	float price;
	
	for(i = 0; i < N; i++){
		scanf(" %[^\n]", v[i].brand);  
		scanf(" %f", &v[i].price);
		scanf(" %d", &v[i].year);
	}
	
	scanf(" %f", &price);
	while(price > 0){	
		printf("Cars with price lower than %.2f:\n", price);
		//searching values under the price and printing on stdout
		for(i = 0; i < N; i++){
			if(price > v[i].price && price > 0){
				printf("%s %.2f %.2f\n", price, v[i].brand, v[i].price, v[i].year);
			}
		}
		printf("\n");
		scanf("%f", &price);
	}
	
	return 0;
}
