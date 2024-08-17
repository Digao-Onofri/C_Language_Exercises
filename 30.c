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
	int root1, root2;
	
	printf("Enter the value of a, b and c:\n");
	scanf("%d %d %d", &a, &b, &c);
	
	root1 = (-b + (sqrt(pow(b,2) - 4 * a * c))) / 2 * a;
	root2 = (-b - (sqrt(pow(b,2) - 4 * a * c))) / 2 * a;
	
	if(root1 != 0 && root2 != 0) {
		printf("root 1: %d\nroot 2: %d\n", root1, root2);
	}
	else if(root1 != 0 && root2 == 0){
		printf("root 1: %d\n", root1);
	}
	else if(root1 == 0 && root2 != 0){
		printf("root 2: %d\n", root2);
	}
	else {
		printf("No real roots\n");
	}



	return 0;
}
