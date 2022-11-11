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
	fprintf(f,"%d %d %d %d %d %s\n",l.id,l.idtete,l.idm1,l.idm2,l.idm3,l.code);
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
        while(fscanf(f,"%d %d %d %d %d %s\n",&anc.id,&anc.idtete,&anc.idm1,&anc.idm2,&anc.idm3,anc.code)!=EOF)
        {
            if(anc.id==id)
            {
                fprintf(f,"%d %d %d %d %d %s\n",nouv.id,nouv.idtete,nouv.idm1,nouv.idm2,nouv.idm3,nouv.code);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %d %s\n",anc.id,anc.idtete,anc.idm1,anc.idm2,anc.idm3,anc.code);

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
	while(fscanf(f,"%d %d %d %d %d %s\n",&l.id,&l.idtete,&l.idm1,&l.idm2,&l.idm3,l.code)!=EOF)
        {
            if(l.id==id)
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %d %s\n",l.id,l.idtete,l.idm1,l.idm2,l.idm3,l.code);
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
        while(tr==0&& fscanf(f,"%d %d %d %d %d %s\n",&l.id,&l.idtete,&l.idm1,&l.idm2,&l.idm3,l.code)!=EOF)
        {
            if(l.id==id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        l.id=-1;
    return l;

}
