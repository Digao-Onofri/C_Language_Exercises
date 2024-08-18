/*

 	Example: Write a program that solves a quadratic equation, in the form: a* x^2 + b * x 
 	+ c = 0. If the equation does not have real roots, print the message “no real roots”.
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
	int a, b, c;
	float root1, root2, delta;
	
	printf("Enter the value of a, b and c:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	delta = pow(b,2) - (4 * a * c);
	root1 = ((-1 * b) - sqrt(delta)) / 2 * a;
	root2 = ((-1 * b) + sqrt(delta)) / 2 * a;
	
	if(delta > 0){
		printf("The Bhaskara will have two real roots %.2f and %.2f\n", root1, root2);
	}
	else if(delta == 0) {
		printf("The Bhaskara will have one real root %.2f\n", root1);
	}
	else {
		printf("The Bhaskara will have no real roots\n");
	}

	return 0;
}
