#include<stdio.h>
#include<string.h>

//Funktions Prototypen

//Hauptprogramm
int main () {
	/*
	*
	*/
	
	printf("\n *************************************** ");
	printf("\n *   ^,,,,^   *                        * ");
	printf("\n *  ( o x o)  *                        * ");
	printf("\n *  ( 7   7)  *                        * ");
	printf("\n *   ´´´´´´   *                ©S.Buch * ");
	printf("\n *************************************** \n\n");
	
	//Füllung des Arrays
	char* vn[5];
	char* nn[5];
	char* ausgabe[81];
		
	//Vornamen
	vn[0]="Laura";
	vn[1]="Janine";
	vn[2]="Marlon";
	vn[3]="Marius";
	vn[4]="Sharon";
	
	//Nachnamen
	vn[0]="Weitmann";
	vn[1]="Reidenbach";
	vn[2]="Schmidt";
	vn[3]="Maurer";
	vn[4]="Janine";
	
	for (int i=0; i<5; i++){
		strcpy(ausgabe,vn[i]);
		char vnTemp[] = vn[i];
		char nnTemp[] = nn[i];
		int vnS = strlen(vnTemp);
		int nnS = strlen(nnTemp);
		for(int j=0; j<(81-vnS-nnS); j++)
			strcpy(ausgabe, "_");
		strcat(ausgabe,nn[i]);
		printf("\n%s",ausgabe[i]);
	}
	
	
	//Ende
	printf("\n\n");
	return 0;
}

//Funktionen
