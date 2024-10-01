/*

 	Example:  Create a structure to represent points in polar coordinates: radius r and argument 
 	a (in degrees). Create a structure to represent points in Cartesian coordinates: x and y. 
 	Read 6 points in polar coordinates and store in a vector. Next, convert these points to 
 	Cartesian coordinates and store the result in another vector. The conversion is given by: x 
 	= r * cos(a) and y = r * sin(a). Finally, show the result of each point in Cartesian 
 	coordinates (x, y), with 2 decimal places. Remember that the argument value must be in 
 	radians to use the cos and sin functions. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#include<math.h> //Pi = acos(-1)
#define N 6 

typedef struct polar{
	float r;
	float a;	
} polar;

typedef struct cartesian{
	float x, y;
} cartesian;

int main()
{
	polar polar[N];
	cartesian cartesian[N];
	int i;
	
	for(i = 0; i < N; i++){
		scanf("%f %f", &polar[i].r, &polar[i].a);
		polar[i].a = polar[i].a * acos(-1) / 180; //changing degrees to radian
	}
	
	//Converting Points to Cartesian Coordinates
	for(i = 0; i < N; i++){	
		cartesian[i].x = polar[i].r * cos(polar[i].a);
		cartesian[i].y = polar[i].r * sin(polar[i].a);
	}
	
	//printing the cartesian coordinates 
	for(i = 0; i < N; i++){
		printf("(%.2f, %.2f)\n", cartesian[i].x, cartesian[i].y);
	}

	return 0;
}
