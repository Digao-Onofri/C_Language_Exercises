/*

 	Example: Make a program that receives a number, then using recursion calculate
    	the fibonacci of the number
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int fibonacci(int n);

int main (){
    int n, i;
    printf("Enter the number of terms: \n");
    scanf("%d", &n);

    for(i = 0; i <= n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}

int fibonacci(int n) {
    if(n == 0) {
        return 0; 
    } 
    else if(n == 1) {
        return 1;
    } 
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
