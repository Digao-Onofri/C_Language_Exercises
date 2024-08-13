/* 
 	Example: Make a program that reads a value in euros and the dollar 
  	exchange rate. Next, show the amount in euros converted into dollars.
 	Youtube lesson: https://youtu.be/IAvfEo8CkWc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>

int main() {
	float euros, der;
	float answer;
	
	printf("Enter the amount of euros: ");
	scanf("%f", &euros);
	
	printf("Enter the dollar exchange rate: ");
	scanf("%f", &der);	
	answer = euros / der;
	
	printf("Your amount of dollars are %.2f\n", answer);

	return 0;
}
