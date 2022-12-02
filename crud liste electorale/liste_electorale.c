#include "liste_electorale.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>


int ajouter_liste(char *fn ,liste l)
{
    FILE *f=fopen(fn,"a");
    if(f!=NULL)
    {
	fprintf(f,"%d %d %d %d %d %s\n",l.id,l.idtete,l.idm[0],l.idm[1],l.idm[2],l.ori);
        fclose(f);
        return 1;
    }
    else return 0;
}
int modifier_liste(char *fn ,int id,liste nouv )
{
    int tr=0;
    liste l;
    liste anc;
//liste l fi blast anc
    FILE *f=fopen(fn,"r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {
        while(fscanf(f,"%d %d %d %d %d %s\n",&anc.id,&anc.idtete,&anc.idm[0],&anc.idm[1],&anc.idm[2],anc.ori)!=EOF)
        {
            if(anc.id==id)
            {
                fprintf(f2,"%d %d %d %d %d %s\n",nouv.id,nouv.idtete,nouv.idm[0],nouv.idm[1],nouv.idm[2],nouv.ori);
                tr=1;
            }
            else
                fprintf(f2,"%d %d %d %d %d %s\n",anc.id,anc.idtete,anc.idm[0],anc.idm[1],anc.idm[2],anc.ori);

        }
    }
    fclose(f);
    fclose(f2);
    remove(fn);
    rename("nouv.txt",fn);
    return tr;

}
int supprimer_liste(char *fn, int id)
{
    int tr=0;
    liste l;
    FILE *f=fopen(fn,"r");
    FILE *f2=fopen("nouv.txt","w");
    if(f!=NULL && f2!=NULL)
    {	
	while(fscanf(f,"%d %d %d %d %d %s\n",&l.id,&l.idtete,&l.idm[0],&l.idm[1],&l.idm[2],l.ori)!=EOF)
        {
            if(l.id==id)
                tr=1;
            else
                fprintf(f2,"%d %d %d %d %d %s\n",l.id,l.idtete,l.idm[0],l.idm[1],l.idm[2],l.ori);
        }
    }
    fclose(f);
    fclose(f2);
    remove(fn);
    rename("nouv.txt",fn);
    return tr;
}

liste chercher_liste(char *fn,int id)
{
    liste l;
    int tr=0;
    FILE *f=fopen(fn, "r");
    if(f!=NULL)
    {
        while(tr==0 && fscanf(f,"%d %d %d %d %d %s\n",&l.id,&l.idtete,&l.idm[0],&l.idm[1],&l.idm[2],l.ori)!=EOF)
        {
            if(l.id==id)
                tr=1;
        }
    }
    fclose(f);
    if(tr==0)
        l.id=-1;

    else
	l.id=id;
    return l;

    

}
