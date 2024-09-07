/*

 	Example: Each country has its own taxes included in the product price. Write a program 	
 	which reads the value of the product and the acronym of the country to see the price of the 
 	products with taxes
 	Youtube lesson: https://youtu.be/Dx675vspTgY
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
int main() { 
	float price;
	char acronym[4];
	char BRA[4] = {'B','R','A','\0'};
	char EUA[4] = {'E','U','A','\0'};
	char FRA[4] = {'F','R','A','\0'};
	char ITA[4] = {'I','T','A','\0'};
	
	printf("Enter the product price:");
	scanf("%f", &price);
	
	printf("%s %s %s %s\n", BRA, EUA, FRA, ITA);
	
	printf("Enter the acronym of one of the countries above: ");
	scanf("%s", acronym);
	
	if(strcmp(acronym, BRA) == 0) {
		printf("The new price with taxes in BRA is: %.2f\n", price * 112.2 / 100.0);
	}
	else if(strcmp(acronym, EUA) == 0) {
		printf("The new price with taxes in EUA is: %.2f\n", price * 107.5 / 100.0);
	}
	else if(strcmp(acronym, FRA) == 0) {
		printf("The new price with taxes in FRA is: %.2f\n", price * 115.7 / 100.0);
	}
	else if(strcmp(acronym, ITA) == 0) {
		printf("The new price with taxes in ITA is: %.2f\n", price * 108.4 / 100.0);
	}
	
	return 0;
}
