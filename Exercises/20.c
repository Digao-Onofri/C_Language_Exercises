/*

 	Example: A teacher receives $50 for each class. Write a program that reads the number of 
 	classes taken and shows your earnings with a 27% tax reduction.
 	Youtube lesson: https://youtu.be/9GEkRe-Qt9A
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	int classes;
	
	printf("Enter the amount of classes taken: ");
	scanf("%d", &classes);
	
	printf("Total earnings is: %.2f\n", (classes * 50) * 73 / 100.0); 
	
	return 0;
}
