/* 
 	Example: Make a program that reads a value in euros and the dollar 
  	exchange rate. Next, show the amount in euros converted into dollars.
 	Youtube lesson: https://youtu.be/IAvfEo8CkWc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
<<<<<<< HEAD
=======
/* 
   	First of all, we have to include the library which contains the function that
  	will print the information on the screen. Next, start creating the variables 
	for the euros, dollar exchange rate (der) and the answer (division between euros
 	and der), after all, print on the screen the answer 
*/
>>>>>>> 9c82057df2a8c983701a53ff0353e6aec9c9e388

#include<stdio.h>

int main() {
	float euros, der;
	float answer;
	
	printf("Enter the amount of euros: ");
	scanf("%f", &euros);
	
	printf("Enter the dollar exchange rate: ");
	scanf("%f", &der);	
	answer = euros / der;
	
	printf("Your amount of dollars are: %.2f\n", answer);

	return 0;
}
