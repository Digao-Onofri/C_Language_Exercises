/*

 	Example: A machine needs 17 seconds to make a part. Make a program that reads the number of parts 
  	that will need to be manufactured, and shows the time in hours, minutes and seconds that will be 
   	needed to produce them..
 	Youtube lesson: https://youtu.be/4W6w65Q7tlg
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	int parts, time_parts, time_hours, time_minutes, time_seconds;
	
	printf("Enter the amount of parts to be manufactured: ");
	scanf("%d", &parts);
	
	time_parts = parts * 17;
	
	time_hours = time_parts / 3600.0;
	time_minutes = (time_parts % 3600) / 60.0;
	time_seconds = (time_parts % 3600) % 60;
	
	printf("Produce time: %d hours, %d minutes and %d seconds\n", time_hours, time_minutes, time_seconds);
	
	return 0;
}
