/*

 	Example:  Declare a structure to represent complex numbers, made up of the real part and the 
 	imaginary part. Next, read two complex numbers (real part followed by imaginary part of each 
 	one). Present as an answer the addition, subtraction and product of complex numbers, being 
 	one value per line. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

typedef struct nc
{
	float r;
	float i;
} nc;

#include<stdio.h>
int main()
{
	nc v[2];
	int j;
	float s, d, m, si, di, mi;
	
	for(j = 0; j < 2; j++)
	{
		scanf(" %f", &v[j].r);
		scanf(" %f", &v[j].i);
	}
	
	s = si = d = di = m = mi = 0;
	//calculating and printing de sum
	s = (v[0].r + (v[1].r));
	si = (v[0].i + (v[1].i));
    	printf("Soma: %f + ", s);
	printf("(%f)i\n", si);

	//calculating and printing the difference
	d = (v[0].r - (v[1].r)); 
	di = (v[0].i - (v[1].i));
	printf("Subtracao: %f + ", d);
	printf("(%f)i\n", di);
	//calculating and printing the multiplication
	m = ( v[0].r * (v[1].r) ) - ( v[0].i * (v[1].i) ); 
	mi = ( v[0].r * (v[1].i) ) +   ( v[1].r * (v[0].i) ) ;
	printf("Produto: %f + ", m);
	printf("(%f)i\n", mi);
	
	return 0;
}
