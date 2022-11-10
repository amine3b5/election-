#include <stdio.h>
#include <string.h>
#include"utilisateur.h"
int ajouter(char *, utilisateur );
int modifier( char *, int, utilisateur);
int supprimer(char *, int );
utilisateur chercher(char *, int);

int main()
{
    utilisateur u1= {"observateur","fetoui","anis",13274508,"128725",22,6032,20,1,"homme"},u2= {"electeur","guedri","wassim",13274588,"128726",25,6032,20,1,"homme"},u3;
    int x=ajouter("utilisateur.txt", u1);
    
    if(x==1)
        printf("\n ajout d'utilisateur avec succés");
    else printf("\n echec ajout");
        
    x=modifier("utilisateur.txt",1,u2 );

    if(x==1)
        printf("\nModification d'utilisateur avec succés");
    else printf("\nechec Modification");
    x=supprimer("utilisateur.txt",1 );
    if(x==1)
        printf("\n Suppression d'utilisateur avec succés");
    else printf("\n echec Suppression");
    u3=chercher("utilisateur.txt",3);
    if(u3.cin==-1)
        printf("introuvable");
return 0;

}
