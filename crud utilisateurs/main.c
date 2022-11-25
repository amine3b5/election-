#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include"utilisateur.h"
int main()
{
	utilisateur u1= {"electeur","fetoui","anis",13274,55216,"128725",22,6032,20,1,"homme"};
	utilisateur u2= {"electeur","guedri","wassim",13278,77862,"128726",25,6032,20,1,"homme"};
	utilisateur u3;
	int x=ajouter("utilisateur.txt", u1);
	int m=ajouter("utilisateur.txt", u2);
	/*if(x==1)
        printf("\n ajout d'utilisateur avec succés");
	else printf("\n echec ajout");
	x=modifier("utilisateur.txt",55216,u2 );
	if(x==1)
        printf("\nModification d'utilisateur avec succés");
	else printf("\nechec Modification");
	x=supprimer("utilisateur.txt",55216 );
	if(x==1)
        printf("\n Suppression d'utilisateur avec succés");
	else printf("\n echec Suppression");
	u3=chercher("utilisateur.txt",55216);
	if(u3.id == -1)
        printf("introuvable");*/
	float z= agemoyen("utilisateur.txt");
	printf("%.2f\n",z);
	int q=nbe( "utilisateur.txt", 77862 );
	printf("%d\n",q);
	return 0;
}
/*#include <stdio.h>
#include "utilisateur.h"
int main()
{  int choice,a;
        do {
            printf("1. ajouter un utilisateur\n");
            printf("2. chercher un utilisateur\n");
            printf("3. modifier un utilisateur\n");
            printf("4. supprimer un utilisateur\n");
            printf("0. sortir\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);
        }while ((choice>5)||(choice<0));
        switch (choice) {
            case 1: {
                utilisateur p;
                printf("Entrez un type d'utilisateur: ");
                scanf("%s", p.tu);
                printf("Entrez votre nom: ");
                scanf("%s", p.nom);
                printf("Entrez votre prénom: ");
                scanf("%s", p.prenom);
		printf("Entrez votre cin ");
                scanf("%d", p.cin);
		printf("Entrez votre id ");
                scanf("%d", p.id);
                printf("Entrez votre mot de passe: ");
                scanf("%s", p.mdp);
                printf("Entrez votre age: ");
                scanf("%d", p.age);
                printf("Entrez votre code postale: ");
                scanf("%d", p.cp);
		printf("Entez votre numero de buro de vote:");
                scanf("%d", p.nbv);
		printf("Entrez votre vote ");
                scanf("%d", p.vote);
		printf("Entrez votre sexe ");
                scanf("%s", p.sexe);
                do {
                    printf("Enter role: \n");
                    printf("0-condidat \n");
                    printf("1-observateur \n");
                    printf("2-agent \n");
                    printf("3-electeur \n");
                    scanf("%d", &p.tu);
                }while ((p.tu>4)||(p.tu<0));
                 do{
                 printf("Entrez votre vote :\n");
                 printf("1 si oui 0 si non\n");
                 scanf("%d",&p.vote);
                 }while((p.vote!=1)||(p.vote!=0));
                 printf("Entrez votre numero de bureau de vote:\n");
                 scanf("%d",&p.nbv);
                a=ajouter(char *fn, utilisateur p);
                if (a==0)
                    printf("impossible d'ajouter");
                else {
		printf("ajout fini");
                printf("%d",a);
                FILE * f=fopen("u.txt", "a");
                fprintf(f,"%d", p.tu);
                fclose(f);
		}
                break;
                    }
           case 2:{
                utilisateur U_cherche;
                int id_rech;
                printf("donner le id de utilisateur à chercher\n");
                scanf("%d",&id_rech);
                U_cherche=chercher(char *fn, int id);
		}
            case 3:{
		int m;
		int id;
                utilisateur nouv;
                printf("donner les nouvau données d'utilisateur");
                printf("Entrez un type d'utilisateur: ");
                scanf("%s", nouv.tu);
                printf("Entrez votre nom: ");
                scanf("%s", nouv.nom);
                printf("Entrez votre prénom: ");
                scanf("%s", nouv.prenom);
		printf("Entrez votre cin ");
                scanf("%d", nouv.cin);
		printf("Entrez votre id ");
                scanf("%d", nouv.id);
                printf("Entrez votre mot de passe: ");
                scanf("%s", nouv.mdp);
                printf("Entrez votre age: ");
                scanf("%d", nouv.age);
                printf("Entrez votre code postale: ");
                scanf("%d", nouv.cp);
		printf("Entez votre numero de buro de vote:");
                scanf("%d", nouv.nbv);
		printf("Entrez votre vote ");
                scanf("%d", nouv.vote);
		printf("Entrez votre sexe ");
                scanf("%s", nouv.sexe);
                 m=modifier(char *fn, int id, utilisateur nouv);
                if (m==0)
                    printf("la modification a ete terminé\n");
                else
                    printf("impossible de modifier\n");               
            }
            case 4:{
		int id_sup,s;
                printf("donner le id d'utilisateur à supprimer\n");
                scanf("%d",&id_sup);
                s=supprimer(char *fn, int id);
                if(s==0)
			printf("la suppression a ete terminé\n");
                else
			printf("impossible de supprimer\n");
            	}
 
return 0;  
}*/

