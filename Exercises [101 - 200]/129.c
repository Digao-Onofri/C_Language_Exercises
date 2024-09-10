/*

 	Example:  Make a function that receives a date and displays it on the screen in full textual 
 	format. Example: for 01/01/2000, print: January 1, 2000. Your scanf should read the date in 
 	dd/mm/yyyy format. In Moodle, Enter your full program (Main + Functions). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

char *getmes(int mes);

int main() {
	char *answer;
	int dia, mes, ano;
	
	scanf("%d/%d/%d", &dia, &mes, &ano);
	
	answer = getmes(mes);

	printf("%d de %s de %d", dia, answer, ano);

	return 0;
}

char *getmes(int mes) {
	char* getmes;
	switch(mes){
		case 1 : mes = 1;
			getmes = "janeiro";
			break;
		case 2: mes = 2;
			getmes = "fevereiro";
			break;
		case 3: mes = 3;
			getmes = "marco";
			break;
		case 4: mes = 4;
			getmes = "abril";
			break;
		case 5: mes = 5;
			getmes = "maio";
			break;
		case 6: mes = 6;
			getmes = "junho";
			break;
		case 7: mes = 7;
			getmes = "julho";
			break;
		case 8: mes = 8;
			getmes = "agosto";
			break;
		case 9: mes = 9;
			getmes = "setembro";
			break;
		case 10:mes = 10;
		getmes = "outubro";
			break;
		case 11:mes = 11;
			getmes = "novembro";
			break;
		case 12:mes = 12;
			getmes = "dezembro";
			break;
	}
	
	return getmes;
}	
