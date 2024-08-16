/*

 	Example: Make a program that read two values and storage in two variables: v1 and v2. Next,
 	swap the values between the two variables and print it on the screen. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>

int main() {
	int *p = NULL;
	int v1, v2, aux;
	
	printf("Enter the value of the two variables: \n");
	scanf("%d %d", &v1, &v2);
	 
	p = &v1;         //This pointer points to the memory address of variable v1 	
	aux = v1; 	 //The variable aux storage the value of v1			
	*p = v2; 	 //Now typing asterisk before p, we can change the value of v1
	
	p = &v2;         //This time, the pointer points to the memory addres of variable v2
	*p = aux;        //Here we are changing the value of v2 using the value of aux

	printf("The new values for v1 and v2 are: %d %d\n", v1, v2);

	return 0;
}
