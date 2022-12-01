#include "liste_electorale.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int ajouter_liste(liste l)
{
    FILE *f;
f=fopen("l_electorale.txt","a");
    if(f!=NULL)
    {
	fprintf(f,"%d %d %d %d %d\n",l.id,l.idtete,l.idm[0],l.idm[1],l.idm[2]);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier_liste(int id,liste nouv )
{
    int tr=0;
    liste anc;
    FILE *f=fopen("l_electorale.txt","r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %d\n",&anc.id,&anc.idtete,&anc.idm[0],&anc.idm[1],&anc.idm[2])!=EOF)
        {
            if(anc.id==id)
            {
                fprintf(f,"%d %d %d %d %d\n",nouv.id,nouv.idtete,nouv.idm[0],nouv.idm[1],nouv.idm[2]);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %d\n",anc.id,anc.idtete,anc.idm[0],anc.idm[1],anc.idm[2]);

        }
    }
    fclose(f);
    fclose(f2);
    remove("l_electorale.txt");
    rename("nouv.txt","l_electorale.txt");
    return tr;

}
int supprimer_liste(int id)
{
    int tr=0;
    liste l;
    FILE *f=fopen("l_electorale.txt","r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {	
	while(fscanf(f,"%d %d %d %d %d\n",&l.id,&l.idtete,&l.idm[0],&l.idm[1],&l.idm[2])!=EOF)
        {
            if(l.id==id)
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %d\n",l.id,l.idtete,l.idm[0],l.idm[1],l.idm[2],);
        }
    }
    fclose(f);
    fclose(f2);
    remove("l_electorale.txt.txt");
    rename("nouv.txt","l_electorale.txt");
    return tr;
}

liste chercher_liste(int id)
{
    liste l;
    int tr;
    FILE *f=fopen("l_electorale.txt", "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%d %d %d %d %d\n",&l.id,&l.idtete,&l.idm[0],&l.idm[1],&l.idm[2])!=EOF)
        {
            if(l.id==id)
                tr=1;
	    else
		tr=-1;
        }
    }
    fclose(f);
    if(tr==0)
        l.id=-1;
    return l;

}
