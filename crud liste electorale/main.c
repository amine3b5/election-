#include <stdio.h>
#include <string.h>
#include"liste_electorale.h"
int main()
{	
	liste l1={1,123,{124,125,126},"gauche",0};
	liste l2={2,223,{224,225,226},"droite",0};
	liste l3={3,323,{324,325,326},"centre",0};
	int x=ajouter_liste("listes_electorales.txt",l1);
	if(x=1)
		printf("liste ajouter avec succée\n");
	else
		printf("echec\n");
	int k=ajouter_liste("listes_electorales.txt",l2);
		if(k=1)
		printf("liste ajouter avec succée\n");
	else
		printf("echec\n");
	int m=modifier_liste("listes_electorales.txt",2,l3);
	if(m=1)
		printf("liste modifier avec succée\n");
	else
		printf("echec de modification \n");
	int v=supprimer_liste("listes_electorales.txt",1);
	if(v!=1)
		printf("echec de supprimer cette liste\n");
		
	else
		printf("liste supprimer avec succée\n");
	liste chercher_liste("listes_electorales.txt",1);
	//if(c=1)
	//	printf("liste existe\n");
	//else
	//	printf("liste introuvable\n");

		

}
