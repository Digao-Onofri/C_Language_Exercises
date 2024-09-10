/*

 	Example:  Let the following struct be to represent points in 2D space: struct point 
 	{ int x, y; 
 	};
 	Make a Boolean function (returns 0 = no, or 1 = yes) that takes a Point P and checks 
 	if it is contained within a rectangle. The rectangle is defined by two points: the lower-
 	left vertex (v1) and the upper right vertex (v2). For all points, read the X and Y 
 	coordinates. In Moodle, enter your Full program (main + functions). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<stdbool.h> //true = 1 false = 0

typedef struct ponto {
	int x, y;
} ponto;

bool contido(ponto v1, ponto v2, ponto a);

int main() {	
	ponto a;
	ponto v1;
	ponto v2;
	bool answer;
	
	scanf("%d %d", &a.x, &a.y);
	scanf("%d %d", &v1.x, &v1.y);
	scanf("%d %d", &v2.x, &v2.y);
	
	answer = contido(v1, v2, a);
	
	printf("%d\n", answer);

	return 0;
}

bool contido(ponto v1, ponto v2, ponto a) {
	if(v1.x < a.x && v2.x > a.x) {
		if(v1.y < a.y && v2.y > a.y) {
			return true;
		}
	}
	else {
		return false;
	}
}
