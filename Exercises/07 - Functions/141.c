/*

 	Example:  Let the following struct be to represent points in 2D space: struct point 
 	{ int x, y; 
 	};
 	Make a Boolean function (returns 0 = no, or 1 = yes) that takes a Point P and checks 
 	if it is contained within a rectangle. The rectangle is defined by two points: the lower-
 	left vertex (v1) and the upper right vertex (v2). For all points, read the X and Y 
 	coordinates. 
 	Youtube lesson: https://youtu.be/rixLULL3_Es
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<stdbool.h> //true = 1 false = 0

typedef struct point {
	int x, y;
} point;

bool contained(point v1, point v2, point a);

int main() {	
	point a;
	point v1;
	point v2;
	bool answer;
	
	printf("Enter a point:\n");
	scanf("%d %d", &a.x, &a.y);
	printf("Enter the lower-left vertex:\n");
	scanf("%d %d", &v1.x, &v1.y);
	printf("Enter the upper right vertex:\n");
	scanf("%d %d", &v2.x, &v2.y);
	
	answer = contained(v1, v2, a);
	
	printf("%d\n", answer);

	return 0;
}

bool contained(point v1, point v2, point a) {
	if(v1.x < a.x && v2.x > a.x) {
		if(v1.y < a.y && v2.y > a.y) {
			return true;
		}
	}
	return false;
}
