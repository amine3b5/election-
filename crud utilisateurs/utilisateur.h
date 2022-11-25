#ifndef PROJET_C_H_INCLUDED
#define PROJET_C_H_INCLUDED

#include<stdio.h>
typedef struct utilisateur
{
	char tu[20];
   	char nom[20];
	char prenom[20];
	int cin;
	int id;
	char mdp[8];
 	int age;
	int cp;
	int nbv;
	int vote;
	char sexe[10];
} utilisateur;

int ajouter(char *, utilisateur);
int modifier(char *, int, utilisateur);
int supprimer(char *, int);
utilisateur chercher(char *, int);
float agemoyen(char * fn);
int nbe( char * fn, int  id );

#endif
